#include "ShapeContainer.h"


int main()
{
    setlocale(LC_ALL, "");

    ShapeContainer container;

    while (1 == 1) {
        int ex, howMany = 0;
        std::cout << "------------------------------------\n";
        std::cout << "Wybierz ksza³t do dodania do tablicy\n";
        std::cout << "------------------------------------\n";
        std::cout << "     0 - Wyjœcie                    \n";
        std::cout << "     1 - Rectangle                  \n";
        std::cout << "     2 - Square                     \n";
        std::cout << "     3 - Circle                     \n";
        std::cout << "     4 - Ellipse                    \n";
        std::cout << "     5 - Wyœwietl wszystkie         \n";
        std::cout << "     6 - Suma pól                   \n";
        std::cout << "     7 - Wyœwietl wiêksze od        \n";

        std::cout << "------------------------------------\n";
        std::cin >> ex;
        if (ex == 0) break;
        else if (ex >= 8) continue;
        else if (ex == 1 or ex == 2 or ex == 3 or ex == 4) {
            std::cout << "------------------------------------\n";
            std::cout << "              Ile?                  \n";
            std::cout << "------------------------------------\n";
            std::cin >> howMany;
            std::cout << "------------------------------------\n";
            std::cout << "         Podaj parametry:           \n";
            std::cout << "------------------------------------\n";
        }
        
        std::string name;
        double a, b;

        switch (ex) {
            case 1: {
                for (int i = 0; i < howMany; i++) {
                    std::cout << "           nazwa a b                \n";
                    std::cout << "------------------------------------\n";
                    std::cin >> name >> a >> b;
                    container.add(new Rectangle(name, a, b));
                }
                break;
            }
            case 2: {
                for (int i = 0; i < howMany; i++) {
                    std::cout << "           nazwa a                  \n";
                    std::cout << "------------------------------------\n";
                    std::cin >> name >> a;
                    container.add(new Square(name, a));
                }
                break;
            }
            case 3: {
                for (int i = 0; i < howMany; i++) {
                    std::cout << "           nazwa a                  \n";
                    std::cout << "------------------------------------\n";
                    std::cin >> name >> a;
                    container.add(new Circle(name, a));
                }
                break;
            }
            case 4: {
                for (int i = 0; i < howMany; i++) {
                    std::cout << "           nazwa a b                \n";
                    std::cout << "------------------------------------\n";
                    std::cin >> name >> a >> b;
                    container.add(new Ellipse(name, a, b));
                }
                break;
            }
            case 5: {
                    std::cout << "         wyœwietlam wszystkie       \n";
                    std::cout << "------------------------------------\n";
                    container.displayAll();
                break;
            }
            case 6: {
                std::cout << "         wyœwietlam sumê pól        \n";
                std::cout << "------------------------------------\n";
                std::cout << container.totalArea() << std::endl;
              break;
            }
            case 7: {
                std::cout << "          podaj liczbê              \n";
                std::cout << "------------------------------------\n";
                double s = 0;
                std::cin >> s;
                std::cout << "         wyœwietlam wiêksze od      \n";
                std::cout << "------------------------------------\n";
                std::vector<Shape*> x = container.getGreaterThan(s);
                for (auto& shape : x)
                    shape->display();
                break;
            }
            default: break;
        }
    }
    return 0;
}