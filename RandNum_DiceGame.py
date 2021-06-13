import random
print("1: roll the dice")
print("0: i dont wanna play the game,i quit")

while 1:
    dice=int(input("enter 0 or 1:"))
    if dice==1:
        n=random.randint(1,6)
        if n==6:
            print(n)
        else:
            print(n)
            break
    elif dice==0:
            print("i dont wanna play the game")
            break
    else:
            print("you choose wrong number,give the correct number either 0 or 1")
