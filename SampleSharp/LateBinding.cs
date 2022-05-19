using System.Reflection;

using System.IO;

public interface ILateBoundSample
{
    void RandomMethod();
}

public class LateBindingSample
{
    public void RandomMethod()
    {
        //...
    }
}
//#todo 
//#TODO: asdasdasd
//TODO: asdasd
//Load an assembly
var assembly = Assembly.LoadFile(Path.GetFullPath("path_to_your_assembly"));

//Locate all types that implement interface 'ILateBoundSample'
var types = assembly.GetTypes().Where(p => typeof(ILateBoundSample).IsAssignableFrom(p));

if (types.Any())
{
    /***Existing method***/
    //Create an instance of that class
    var lateBoundSample = (ILateBoundSample)Activator.CreateInstance(types.First());

    //Locate and call method RandomMethod();
    lateBoundSample.RandomMethod();

    /***Non-Existing method***/
    //Method 'NotExistingMethod' does't exist
    // Since 'lateBoundSample' is of type 'ILateBoundSample', compiler knows
    lateBoundSample.NotExistingMethod();
    //Compiler Error CS1061:
    // 'ILateBoundSample' does not contain a definition for 'NotExistingMethod' 
    //   and no accessible extension method 'NotExistingMethod' 
    //   accepting a first argument of type 'ILateBoundSample' could be found 
    //   (are you missing a using directive or an assembly reference?)
}
var lateBoundSample = new LateBindingSample();

/***Existing method***/
//Locate method 'NotExistingMethod' that doesn't exist
var method = lateBoundSample.GetType().GetMethod("RandomMethod");

//Call method without any parameteres (null)
var result = method.Invoke(lateBoundSample, null);

/***Non-Existing method***/
//Try to locate method 'RandomMethod'
var method = lateBoundSample.GetType().GetMethod("NotExistingMethod");

//Call method without any parameteres (null)
var result = method.Invoke(lateBoundSample, null);
// You 'll get a runtime error since 'method' is null:
// System.NullReferenceException: 'Object reference not set to an instance of an object.