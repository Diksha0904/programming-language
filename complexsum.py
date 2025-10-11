def add_complex_numbers(complex_num1, complex_num2):
  """
  Adds two complex numbers and returns their sum.
  """
  return complex_num1 + complex_num2

# Define two complex numbers
z1 = complex(4, 2)  # Using the complex() constructor
z2 = complex(-3, 7)

# Call the function to add them
sum_result = add_complex_numbers(z1, z2)

# Print the result
print(f"The sum of {z1} and {z2} is: {sum_result}")