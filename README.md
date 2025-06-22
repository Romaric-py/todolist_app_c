# TODOLIST APP

## Description

**TODOLIST APP** is a simple C application that allows users to manage a task list. Users can add, modify, delete, and view tasks. This application provides a command-line interface to easily interact with the task list.

## Features

- Display an overview of the task list.
- Add a new task.
- Modify the label of an existing task.
- Mark a task as completed or not completed.
- Display the details of a task.
- Delete a task.
- Search for a task by its ID.
- Display the list of available commands.
- Exit the application.

## Prerequisites

Before getting started, make sure you have installed:

- A C compiler (like `gcc`).
- A development environment (optional but recommended).

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Romaric-py/todolist_app_c.git
   ```
2. Navigate to the project folder:
   ```bash
   cd project_name
   ```
3. Compile the code:
   ```bash
   gcc -o todolist_app app.c utils.c colors.c todolist.c
   ```

## Usage

To run the program, use the following command:
```bash
./todolist_app
```

### Examples

- To add a new task, follow the on-screen instructions after selecting the appropriate option.
- To modify a task, enter the task number when prompted.

## Contribution

Contributions are welcome! If you would like to contribute:

1. Fork the project.
2. Create your branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push the branch (`git push origin feature/YourFeature`).
5. Open a Pull Request.

## Authors

- **Ifèdé Assogba** - *Lead Developer* - [https://github.com/Romaric-py]

## License

This project is licensed under MIT License. See the [LICENSE](LICENSE) file for more details.
