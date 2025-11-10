using System;

class Program {
    static void Main() {
        Console.Write("Informe a largura do terreno: ");
        double largura = double.Parse(Console.ReadLine());

        Console.Write("Informe o comprimento do terreno: ");
        double comprimento = double.Parse(Console.ReadLine());

        Console.Write("Informe o valor do metro quadrado: ");
        double valorMetro = double.Parse(Console.ReadLine());

        double area = largura * comprimento;
        double preco = area * valorMetro;

        Console.WriteLine("Área do terreno = " + area.ToString("F2"));
        Console.WriteLine("Preço do terreno = R$ " + preco.ToString("F2"));
    }
}
