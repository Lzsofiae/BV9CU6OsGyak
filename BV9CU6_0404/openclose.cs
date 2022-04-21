using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace neptunkod_openclose
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader(@"neptunkod.txt");
            Console.WriteLine(sr.ReadLine());
            Console.ReadLine();
        }
    }
}
