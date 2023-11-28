#!/usr/bin/python3
# Author - Godswill Kalu
"""Print the nums from 1 to 100 separated by a space.
  For multi of three, print Fizz instead of the num
  For multi of five, print Buzz instead of the num.
  For multi of three and five, print FizzBuzz instead of the num.
  """


def fizzbuzz():
    for number in range(1, 101):
        if number % 3 == 0 and number % 5 == 0:
            print("FizzBuzz ", end="")
        elif number % 3 == 0:
            print("Fizz ", end="")
        elif number % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(number), end="")
