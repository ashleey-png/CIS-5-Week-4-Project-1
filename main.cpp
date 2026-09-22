#include <iostream>
#include <string>

// Project 1 — Ashley Duran
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)
std::string first = "Ashley";
int age =  24;
int credits = 110;
double GPA = 2.6;


  // TODO (week 2): a cout question, then a cin into the box — four times
std::cout << "Enter your first name: ";
std::cin >> first;

std::cout << "Enter your age: ";
std::cin >> age;

std::cout << "Enter your completed credits: ";
std::cin >> credits;

std::cout << "Enter your current GPA: ";
std::cin >> GPA;


  // TODO (week 4): one computed line with an operator
  //   int grad_year = CURRENT_YEAR + 4;

  int grad_year = CURRENT_YEAR + 2;

  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value

  std::cout << "=== Student Card ===\n";
  std::cout << "Name: " << first << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Completed credits: " << credits << "\n";
  std::cout << "GPA: " << GPA << "\n";
  std::cout << "Expected Graduation year: " << grad_year << "\n";

  return 0;
}
