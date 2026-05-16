# 🐍 Day 3 — Input & Output

Welcome to Day 3 of **Learn Python with Erica — 30 Days** 

Today we will learn how to:

* receive information from the user
* display information on the screen

---

#  What is Output?

Output means displaying information on the screen.

In Python, we use:

```python
print()
```

---

##  Example

```python
print("Welcome to Python!")
```

---

##  Output

```python
Welcome to Python!
```

---

#  What is Input?

Input allows the user to type information into the program.

In Python, we use:

```python
input()
```

---

#  Example

```python
name = input("Enter your name: ")

print("Hello,", name)
```

---

#  Explanation

* `input()` waits for the user to type something
* The typed value is stored in the variable `name`
* `print()` displays the result

---

#  Example Output

```python
Enter your name: Erica
Hello, Erica
```

---

#  Input with Numbers

By default, `input()` stores data as text.

To use numbers, we convert them using:

```python
int()
```

---

## 💻 Example

```python
age = int(input("Enter your age: "))

print("You are", age, "years old")
```

---

# ▶️ Example Output

```python
Enter your age: 100
You are 100 years old
```

---

#  Multiple Inputs Example

```python
name = input("Enter your name: ")
country = input("Enter your country: ")

print("Name:", name)
print("Country:", country)
```

---

#  Exercise

Create a program that asks the user for:

* name
* age

Then display:

```python
Hello Erica, you are 100 years old
```

---

# ⭐ Challenge

Create a program that asks for:

* favorite food
* favorite color

Then display a personalized message.

Example:

```python
Your favorite food is pizza and your favorite color is blue
```

---

#  Note

Input and Output make programs interactive.

This is how programs communicate with users 💡
