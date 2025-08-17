drink_choice = 3
menu = {
    1: "Tea",
    2: "Coffee",
    3: "Juice"
}
print(f"You have selected: {menu.get(drink_choice, 'Invalid selection.')}")