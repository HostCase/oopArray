#include "application.h"
#include "arraycustom.h"
#include "tpolinom.h"
Application::Application() {}

int Application::exec()
{
    int ch;
    Arraycustom b(5);
    TPolinom pol(10,-7,1);
    while (true){
        ch = menuBar();
    switch(ch){
    case 0:
        return 0;
    case 1:{
        Arraycustom a(0);
        std::cout << a;
        break;
    }

    case 2:
    {
        std::cout << "whrite N, then N-elements ";
        int N;
        std::cin >> N;
        b.change_size(N);
        b.fill_arr(N);
        std::cout << b;
          break;
    }
    case 3:
    {
        std::cout << "whrite index to erase ";
        int index;
        std::cin >> index;
        b.erase(index);
        std::cout << b;
        break;
    }
    case 4:
    {
        std::cout << "Write N to change size ";
        int N;
        std::cin >> N;
        b.change_size(N);
        break;
    }
    case 5:
    {
        number ans = b.middle_value();
        std::cout << "X = " << ans << "\n";
        break;
    }
    case 6:
    {
        number ans = b.SKO();
        std::cout << "S = " << ans << "\n";
        break;
    }
    case 7:
    {
        std::cout << "0 for sorting to up, else for sorting to down ";
        int choose;
        std::cin >> choose;
        choose == 0 ? b.downToUp() : b.upToDown();
        break;
    }
    case 9:
    {
        std::cout << b;
        break;
    }
    case 10:
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "write like 2x^2+3x^1+4x^0\n";
        std::cin >> pol;
        std::cout << pol << "\n";
        break;
    }
    case 11:
    {

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "write a[0]\n";
        double a;
        std::cin >> a;
        TPolinom pol(a);
        std::cout << pol << "\n";
        break;
    }
    case 12:
    {
        std::vector<double> rootz;
        std::cout << "write a[n]\n";
        double an;
        std::cin >> an;
        std::cout << "write degree\n";
        double deg;
        std::cin >> deg;
        for(int i = 0; i < deg; i++){
            std::cout << "write root\n";
            double root;
            std::cin >> root;
            rootz.push_back(root);
        }
        pol.ByRoots(an, rootz);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << pol;
        break;
    }
    case 13:
    {
        pol.setPrintMode(PrintModeClassic);
        std::cout << pol << "\n";
        break;
    }
    case 14:
    {
        if (!pol.eroot()){
        pol.setPrintMode(PrintModeRoot);
        std::cout << pol << "\n";
        break;
        }
        else{
            std::cout << "Неизвестны корни полинома\n";
            break;
        }
    }
    case 15:
    {
        double an;
        std::cout << "new a[n]\n";
        std::cin >> an;
        pol.set_an(an);
        pol.ByRoots(an,pol.getter_roots());
        break;
    }
    case 16:
    {
        double ann = sqrt(pol.getter_an());
        double index;
        double value;
        std::cout << "index \n";
        std::cin >> index;
        std::cout << "Value root\n";
        std::cin >> value;
        std::cout << pol << "\n";
        pol.set_root(index,value);
        pol.ByRoots(ann,pol.getter_roots());
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
    }
    case 17:
    {
        double x;
        std::cout << "write x \n";
        std::cin >> x;
        pol.find_Val_Print(x);
    }
    default:
        break;

    }
}

}

int Application::menuBar()
{
    int ch;
    std::cout << ">0 - exit \n>1 - create array without elements \n>2 - create array with N elements \n>3 - erase \n>4 - change size"
                 "\n>5 - find middle value \n>6 - find SKO\n>7 - sorting \n>9 - to print array\n"
        ">10 - to write canonic polinom\n>11 - to create 0 polinom\n>12 create Polinom by roots and an\n"
        ">13 print classic Polinom\n>14 print a[n] root polinom\n>15 - to set a[n]\n>16 - to set root\n>17 - find  P(x)\n";
    std::cin >> ch;
    return ch;
}
