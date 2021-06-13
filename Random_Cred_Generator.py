import random
login_id_length=int(input("enter the login_id_length:"))
password_length=int(input("enter the password_length:"))
create_login_id="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@"
create_password="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@!#$%^&*()?"
login_id="".join(random.sample(create_login_id,login_id_length))
password="".join(random.sample(create_password,password_length))
print("the random login_idb generated is:",login_id)
print("the random password generated is:",password)
