using System.Net;
enum Enum { 
    ENUM_A,
    ENUM_B,
    ENUM_C
} 
struct Structure { 
};
interface IInterface {
    void Func();
}
/// <summary>
/// asdas
/// </summary>
/// <typeparamref name="TTemplate">asdas</typeparam>
public class Template<TTemplate> : IInterface {
    public TTemplate Param;
    public void Func() { } 
}
public delegate void Delegate();
namespace Daun
{
    class Program
    {
        public const int ConstStaticParameter = 0;
        public static int StaticParameter = 0;
        public event Delegate Event;

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
        public int Function()
        {
            return 0;
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
        public static int Main(int a, string b)
        {
            // xml dodelat'
            int i = 0;
            string str = "asd";
        label:
            { }
            goto label;
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
            return 0;
        }
    }
}