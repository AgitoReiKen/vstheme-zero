using System;
using System.Net;
enum Enum { 
    ENUM_A,
    ENUM_B,
    ENUM_C
} 
struct Structure { 
};

public class Any
{
    public bool someBoolean = true;
}

public static class StringExtension
{
    public static int CharCount(this string str, char c)
    {
        int counter = 0;
        for (int i = 0; i < str.Length; i++)
        {
            if (str[i] == c)
                counter++;
        }
        return counter;
    }
}
interface IInterface {
    void Func();
}
/// <summary>
/// asdas
/// </summary>
/// <typeparamref name="TTemplate">asdas</typeparamref>
public class Template<TTemplate> : IInterface {
    public TTemplate Param;
    public void Func() { } 
}
public delegate void Delegate();
namespace Daun
{

    public record struct RecordStruct(int A)
    {
        public int Zaloopa => A * 2;
    }
    static class StaticClass
    {
        public static int StaticInt = 123;
    }

   
    class Program
    {
        public static bool TestLateBinding(dynamic x)
        {
            return x["someBoolean"];
        }

        public const int ConstParameter = 0;
        public static int StaticParameter = 0;
        public event Delegate Event = null;

        /// <summary>
        /// asdas
        /// <term>asda</term>
        /// <para>asadasd</para>
        /// The <c>Label</c>
        /// </summary>
        /// <param name="a">asd</param>
        /// <param name="b">asd</param>
        /// <returns></returns>
        public static bool operator ==(Program a, Program b) {
            return a.Parameter == b.Parameter;
        }
        public static bool operator !=(Program a, Program b) {
            return !(a == b); 
        }
        public int Parameter { 
            get 
            { 
                return Parameter2; 
            } 
            set
            {
                Parameter2 = value;
            } 
        }
        
        /// <summary>
        /// asdas
        /// </summary>
        public int Parameter2 = 0;
        //TODO implement
        public int Function()
        {
            return NotImplementedException;
        }
        /// <summary>
        /// <param name="a">[a] Parameter A</param><br></br>
        /// <param name="b">[b] Parameter B</param><br></br>
        /// <code> 
        /// var index = 5 ;
        /// index ++
        /// </code>
        /// <see cref="a">Link text</see>
        /// <see href="https://google.com/">Link text</see>
        /// </summary>  
        /// <![CDATA[a, b, c, d]]>
        /// <returns>asdasdas</returns>
        /// <see langword="true">true</see>
        public static int Main(int a, string b, String _class)
        {
            Any any = new Any();

            TestLateBinding(any);
            Tuple<int, string> asda = new(1, "123");
            int ten = 10;
            int i2 = 2147483647 + ten;
            Console.Write(checked(2147483647 + ten));
            checked
            {
                int i3 = 2147483647 + ten;
                Console.Write(i3);
            } 
            int i = 0;
            String str = new("asd");
            str.CharCount();
            Parameter = 0;
            string str = new string("asd".ToCharArray());
            Enum.ENUM_A;
            this->Event;
            StaticParameter;
            ConstParameter;
            string regex = "(Mr\\.? |Mrs\\.? |Miss |Ms\\.? )";
            string[] strings = { };
            foreach (string _str in strings) {
                str = "123";
                _str.Replace('a', 'b');
                regex.Remove(0);
            }
            if (++i == 0)
            {
                do
                {

                } while (++i != 10);
            }
        label:
            { }
            goto label;
            return 0;
        }
    }
}