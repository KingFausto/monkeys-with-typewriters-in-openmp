"""Calculate the expected time for a n-size word.
Time is given by the following formula where x is the size:
f(x) = 62^x / 8500000
"""

speed = 8500000    # 8.5M attempts per second
n_characters = 62  # 26 upper + 26 lower + 10 digits

def main():
  length = int(input("Enter the number of characters: "))
  
  expected_attempts = n_characters ** length
  success_chance = 100 / expected_attempts
  expected_time_in_seconds = expected_attempts / speed

  print(f"\n{expected_attempts=:,}\n{success_chance=}%\n{expected_time_in_seconds=:,.2f}s")

if __name__ == "__main__":
  main()
