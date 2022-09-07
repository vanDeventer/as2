# keyMenu

The idea in this demo is to use the keyboard to select menus (only the firt letter of the menu is really used, for more letters, one must have more logic).
The demo is uses an automatic gearbox as context: you must type the gear you want to go in.
The user must press "Enter" at the end of the text entry.

This branch is based off the non blocking UART branch.

Unlike the buttonMenu branch, the dState variable is defined in main() since it is only used there.