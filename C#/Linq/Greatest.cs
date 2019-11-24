using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main()
    {
        int[] numbers = { 500, 344, 221, 4443, 229, 1008, 6000, 767, 256, 0 };
        var greaterNums =
            from num in numbers
            where num > 500
            select num;
        Console.WriteLine("Numbers Greater than 500 :");
        foreach (var s in greaterNums)
            {
                Console.Write(s.ToString() + " ");
            }
        Console.Read();
    }
}
