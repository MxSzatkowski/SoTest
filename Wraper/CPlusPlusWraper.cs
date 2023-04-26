using System;
using System.Runtime.InteropServices;

namespace Wrapper
{
  public class CPlusPlusWraper
    {
        int AddNumbers(int a, int b);

        public int UseAddNumbers(int a, int b)
        { 
        int output = AddNumbers(10, 20);
        Console.WriteLine($"Rsult {output}");
            return output;
        }

    }
}
