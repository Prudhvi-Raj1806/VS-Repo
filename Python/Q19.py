fuel_choice = 2
fuel_types = {
    1: "Petrol",
    2: "Diesel",
    3: "Electric"
}
print(f"You have chosen: {fuel_types.get(fuel_choice, 'Invalid choice.')}")