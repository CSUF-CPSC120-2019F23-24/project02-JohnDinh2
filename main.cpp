// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::string hotel_name;

  double hotel_cost;

  double meal_cost;

  double total_cost;

  int days_at_hotel;

  std::cout << "Where will you be staying?" << std::endl;

  std::getline(std::cin, hotel_name);// ask for name of hotel, including spaces

  std::cout << "How long will you stay?" << std::endl;

  std::cin >> days_at_hotel;// ask for days at hotel

  std::cout << std::fixed << std::setprecision(2); //ensure that cost does not exceed two decimals

  std::cout << "How much was the hotel?" << std::endl;

  std::cin >> hotel_cost;// ask for hotel cost

  std::cout << "How much was the meal?" << std::endl;

  std::cin >> meal_cost;// ask for meal cost

  std::cout << "Location" << std::setw(20);//output columns for cost titles

  std::cout << "Days" << std::setw(20);

  std::cout << "Hotel" << std::setw(20);

  std::cout << "Meal" << std::setw(20);

  std::cout << "Total" << std::endl;

  total_cost = hotel_cost + meal_cost;// add hotel and meal costs for total

  std::string hotel_cost_string = "$" + std::to_string(hotel_cost);

  std::string meal_cost_string = "$" + std::to_string(meal_cost);// convert all costs to strings

  std::string total_cost_string = "$" + std::to_string(total_cost);

  std::cout << hotel_name.substr(0,20) << std::setw(8);// output all costs with correct spacing

  std::cout << days_at_hotel << std::setw(20);

  std::cout << hotel_cost_string << std::setw(20);

  std::cout << meal_cost_string << std::setw(20);

  std::cout << total_cost_string << std::endl;
}
