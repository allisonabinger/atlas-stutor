class Car:
    # Class attribute
    wheels = 4  # All cars have 4 wheels by default

    def __init__(self, make, model, year, color):
        # Instance attributes
        self.make = make
        self.model = model
        self.year = year
        self.color = color
        self._speed = 0  # Speed attribute, prefixed with underscore to indicate it's intended to be private

    # Getter method to retrieve speed
    def get_speed(self):
        return self._speed

    # Setter method to set speed with validation
    def set_speed(self, speed):
        if 0 <= speed <= 200:  # Assuming a car's speed limit is 200 mph
            self._speed = speed
        else:
            print("Speed must be between 0 and 200.")

    # Method to accelerate the car
    def accelerate(self, increment):
        self._speed += increment

    # Method to decelerate the car
    def decelerate(self, decrement):
        self._speed -= decrement

    # Class method to check if a car is electric
    @classmethod
    def is_electric(cls, make):
        electric_cars = ["Tesla", "Nissan Leaf", "Chevrolet Bolt"]
        return make in electric_cars

    # Static method to convert miles per hour to kilometers per hour
    @staticmethod
    def mph_to_kph(mph):
        return mph * 1.60934

# Example usage
my_car = Car("Toyota", "Corolla", 2022, "Silver")

# Accessing instance attributes
print(f"My car is a {my_car.year} {my_car.make} {my_car.model} with {my_car.wheels} wheels.")

# Using getter method to retrieve speed
print("Current speed:", my_car.get_speed())

# Accelerating the car
my_car.accelerate(50)
print("Accelerated to:", my_car.get_speed())

# Decelerating the car
my_car.decelerate(20)
print("Decelerated to:", my_car.get_speed())

# Using setter method to set speed
my_car.set_speed(180)
print("Set speed to:", my_car.get_speed())

# Trying to set an invalid speed
my_car.set_speed(250)

# Using class method to check if a car is electric
print("Is my car electric?", Car.is_electric("Toyota"))

# Using static method to convert speed from mph to kph
print("Speed in kph:", Car.mph_to_kph(my_car.get_speed()))
