# Runtime: 37ms - Beats 98.79%
# Memory: 15MB - Beats 86.31%
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        def convert(n: int) -> str:
            if n % 3 == 0 and n % 5 == 0:
                return "FizzBuzz"
            elif n % 3 == 0:
                return "Fizz"
            elif n % 5 == 0:
                return "Buzz"
            else:
                return str(n)

        return [convert(num) for num in range(1, n + 1)]
