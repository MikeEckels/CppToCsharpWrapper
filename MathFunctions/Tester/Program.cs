using System;
using Wrapper;

namespace Tester {
    class Program {
        static MathWrapper math = new MathWrapper();
        //static MathWrapper math = new MathWrapper(255.3, 300.3);

        static void Main(string[] args) {
            math.SetRegAwrapper(255.3);
            math.SetRegBwrapper(100.2);

            Console.WriteLine("Wrapper RegA: " + math.GetRegAwrapper());
            Console.WriteLine("Wrapper RegA: " + math.GetRegBwrapper());
            Console.WriteLine("Wrapper Addition: " + math.AddWrapper());
            Console.WriteLine("Wrapper Subtraction: " + math.SubtractWrapper());
            Console.WriteLine("Wrapper Multiplication: " + math.MultiplyWrapper());
            Console.WriteLine("Wrapper Division: " + math.DivideWrapper());
            Console.ReadKey();
        }
    }
}
