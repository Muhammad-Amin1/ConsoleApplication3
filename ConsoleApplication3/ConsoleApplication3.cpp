#include <iostream> 
#include <Windows.h> 

bool Menu(int number);


int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    
    bool work = true;
    while(work)
    {
        std::cout << "\t\t ---- Соки Алуксандра ----\n\n";
        std::cout << "1 -- Товары\n";
        std::cout << "0 -- Выход\n";
        std::cout << "Введите: ";
        int client;
        std::cin >> client;

        if (client == 1 || client == 0)
        {
            work = Menu(client);
        }
        else
        {
            system("cls");
            std::cout << "Некоректный ввод\n";
            Sleep(1500);
        }
        
        
    }
    
}



bool Menu(int number)
{
    double sum_price = 0;
    double sum = 0;
    int hatwron_not = 0;
    int frut_joice = 0;
    std::string fruit[4]{ "яблочный","апельсиновый","абрикосовый","грушевый" };
    int fruit_price[4]{120,130,99,89};
    std::string vagateble[4]{ "томатный","луковый","огуречный", "морковный" };
    int vagateble_price[4]{50,30,20,80};
    std::string teas[4]{ "чесночный","петрушевый","обычный","лимоный" };
    int teas_price[4]{10,25,50,70};
    std::string hawtron[1]{ "Боярышник" };
    int hawtron_price[1]{100};

    if (number == 1)
    {
        while (true)
        {

            system("cls");
            int bayer;
            int discoun = 0;
            float count;

            std::cout << "\t\t ---- Товары ----\n\n";
            std::cout << "1 -- Фруктовые\n";
            std::cout << "2 -- Овощные\n";
            std::cout << "3 -- Чаи\n";
            std::cout << "4 -- Настойки\n";
            std::cout << "5 -- Купить\n";
            std::cout << "0 -- Выход\n";
            std::cout << "Введите: ";
            std::cin >> number;
            std::cout << "\n";

            if (number == 1)
            {


                while (true)
                {
                    char yes_not;
                    system("cls");
                    std::cout << "\t\t ---- Товары ----\n\n";
                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i << " -- " << fruit[i] << "\n";
                        if (i == 3)
                        {
                            std::cout << i + 1 << " -- Выход\n";
                        }
                    }

                    std::cout << "Введите: ";
                    std::cin >> bayer;
                    if (bayer < 4)
                    {
                        std::cout << "Введите сколько литров: ";
                        std::cin >> count;
                        std::cout << "Подтвердите покупку y/n: ";
                        std::cin >> yes_not;

                        if (yes_not == 'y' || yes_not == 'Y')
                        {
                            sum_price += fruit_price[bayer] * count;
                            if (count >= 1)
                            {
                                frut_joice = 1;
                            }
                            if (hatwron_not != 0)
                            {
                                sum_price -= hatwron_not;
                                hatwron_not = 0;

                            }
                        }


                    }

                    else if (bayer == 4)
                    {
                        break;
                    }

                    else
                    {
                        system("cls");
                        std::cout << "Некоректный ввод\n";
                        Sleep(1500);
                    }

                }

            }

            else if (number == 2)
            {
                while (true)
                {
                    char yes_not;
                    system("cls");
                    std::cout << "\t\t ---- Овощные ----\n\n";
                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i << " -- " << vagateble[i] << "\n";
                        if (i == 3)
                        {
                            std::cout << i + 1 << " -- Выход\n";
                        }

                    }

                    std::cout << "Введите: ";
                    std::cin >> bayer;
                    std::cout << "Подтвердите покупку y/n: ";
                    std::cin >> yes_not;

                    if (bayer < 4)
                    {
                        std::cout << "Введите кол-во: ";
                        std::cin >> count;
                        if (yes_not == 'y' || yes_not == 'Y')
                        {
                            sum_price += vagateble_price[bayer] * count;
                        }


                    }
                    else if (bayer == 4)
                    {
                        break;
                    }
                    else
                    {
                        system("cls");
                        std::cout << "Некоректный ввод\n";
                        Sleep(1500);
                    }

                }


            }

            else if (number == 3)
            {
                while (true)
                {
                    char yes_not;
                    system("cls");
                    std::cout << "\t\t ---- чаи ----\n\n";
                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i << " -- " << teas[i] << "\n";
                        if (i == 3)
                        {
                            std::cout << i + 1 << " -- Выход\n";
                        }
                    }
                    std::cout << "Введите: ";
                    std::cin >> bayer;
                    if (bayer < 4)
                    {
                        std::cout << "Введите кол-во: ";
                        std::cin >> count;


                        if (bayer == 1 && count >= 3 && count < 3)
                        {
                            std::cout << "Поздравляем у нас действует 5% скидика на этот продукт !!! ";
                            std::cin >> yes_not;
                            if (yes_not == 'y' || yes_not == 'Y')
                            {
                                sum += teas_price[bayer] * count;
                                sum -= sum * 0.05;
                                sum_price += sum;
                                discoun += 5;
                                sum = 0;

                            }

                        }
                        else
                        {
                            sum_price += teas_price[bayer] * count;
                        }

                    }
                    else if (bayer == 5)
                    {
                        break;
                    }
                    else
                    {
                        system("cls");
                        std::cout << "Некоректный ввод\n";
                        Sleep(1500);
                    }

                }

            }

            else if (number == 4)
            {
                while (true)
                {
                    if (frut_joice == 0)
                    {
                        char yes_not;
                        system("cls");
                        std::cout << "\t\t ---- Настойки ----\n\n";
                        for (int i = 0; i < 1; i++)
                        {
                            std::cout << i << " -- " << hawtron[i] << "\n";
                            if (i == 0)
                            {
                                std::cout << i + 1 << " -- Выход\n";
                               
                            }

                        }

                        std::cout << "Введите: ";
                        std::cin >> bayer;
                        std::cout << "Подтвердите покупку y/n: ";
                        std::cin >> yes_not;

                        if (bayer < 1)
                        {
                            std::cout << "Введите кол-во: ";
                            std::cin >> count;
                            if (yes_not == 'y' || yes_not == 'Y')
                            {
                                sum_price += hawtron_price[bayer] * count;
                                hatwron_not += hawtron_price[bayer] * count;

                            }


                        }
                        else if (bayer == 1)
                        {
                            break;
                        }
                        else
                        {
                            system("cls");
                            std::cout << "Некоректный ввод\n";
                            Sleep(1500);
                        }
                    }

                    else
                    {
                        system("cls");
                        std::cout << "Вам запрещено покупать этот продукт\n";
                        Sleep(1500);
                        break;
                    }

                }
            }

            else if (number == 5)
            {
                while (true)
                {
                    char yes_not;
                    system("cls");
                    std::cout << "\t\t ---- Купить ----\n\n";
                    std::cout << "Подтвердите покупку y/n: ";
                    std::cin >> yes_not;
                    if (yes_not == 'y' || yes_not == 'Y')
                    {
                        if (sum_price > 5000)
                        {
                            std::cout << "Поздравляем сумма вашых покупок больше 5000руб  на вас действует 13% скидики !!! ";
                            sum_price -= sum_price * 0.13;
                            discoun += 13;
                            std::cout << "цена: " << sum_price << " скидки: " << discoun << " %";
                            sum_price = 0;
                            discoun = 0;
                            Sleep(1500);
                            break;
                        }
                        else
                        {
                            std::cout << "цена: " << sum_price << " скидки: " << discoun << " %";
                            sum_price = 0;
                            discoun = 0;
                            frut_joice = 0;
                            Sleep(1500);
                            break;
                        }

                    Sleep(1500);




                    }

                    else if (yes_not == 'n' || yes_not == 'N')
                    {
                        break;
                    }

                    else
                    {
                        system("cls");
                        std::cout << "Некоректный ввод\n";
                        Sleep(1500);
                    }
                    Sleep(1500);


                }

            }
        
            else
            {
                break;
            }
        }
    }

    else if (number == 0)
    {
        return false;
    }
    return true;
}

