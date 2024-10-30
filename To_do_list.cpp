#include <iostream>
#include<vector>
#include<string>

using namespace std;

//making class name to do list
class ToDoList {
    private:

    vector<string> tasks; //using vector we can store task by dynamic array

    public:
    //making function name addtask and to add task
    void addtask(const string& task){
        //here tasks is taken from vector and push_back function is used to add string in vector 
        //and task is taken from addtask function which is argument 
        //ever string set is store at the end of the array
        tasks.push_back(task);
        //showing message that task has been added
        cout << "Task added:" <<task <<endl;
    }
    //making function to removing task
    void removetask(int index) {
        //check if the index valid 
        if(index >= 0 && index < tasks.size()){
        //if index value is greaterthan or equal and index values is small than tasks size
        //dispaly task removed
        cout << "Task Removed:" <<tasks[index];
        //removing task from specific index
        tasks.erase(tasks.begin() + index);
        }
        else{
            // print if index value does not match or invalid index
            cout << "Invalid index" <<endl;
        }

    }
    //make function where display all task in list
    void displaytask(){
        if(tasks.empty()){
            //check if the tasks list is empty 
            //if it is then print ther is no task
            cout << "No task in the list" <<endl;
        }
        else{
            //print tasks in the list
            cout << "Tasks:" <<endl;
            //for loop run for each and evey task of the list
            for(size_t i =0 ; i < tasks.size(); ++i) {
                //print task number i.e i+1 and task discription by tasks[i]
                cout << i+1 << "." <<tasks[i] <<endl;
            } 
        }
    }
};

int main() {
    system("color 5");
    ToDoList mylist; //create a class instant 
    int choice; //intilized choice where user can chose option
    string task; //user can write the  their task

    do
    {
        cout << "-----To Do List-----"<<endl;
        cout << "Choose an option:" <<endl;
        cout << "1.Add the task." <<endl;
        cout << "2.Remove the task." <<endl;
        cout << "3.Display all task." <<endl;
        cout << "4.Quit" <<endl;
        cout << "Enter your choice:";
        cin >> choice; //user can choice the option

        switch(choice){ //star switch statement based on user option
            case 1: //option 1 add the task
            cout << "Enter task:";
            cin.ignore(); //this statement consume or eat or delete the lines left in the buffer
            getline(cin, task); //this statement use to read task from the user 
            mylist.addtask(task); //this statement is used to add task from the user
            break; //end the case 1

            case 2: //option 2 remove the task
            //declare a variable to store a task index which to be removed
            int index;
            cout << "Enter the index no. to be remove:";
            cin >> index; //read the index of tasks
            mylist.removetask(index-1); //this statement remove task by using index
            break;

            case 3 : //option 3 display all the tasks
            mylist.displaytask(); //this statement will display all the task 
            break;

            case 4: //option 4 exit the program 
            cout << "Exiting....." <<endl; //exit  the program
            break;

            default :
            cout << "Invalid choice, Please enter valid choice!!!" <<endl;
            break;
        }// here switch statement is closing
    } while (choice !=4); //loop run until the user enter 4 after enter 4 program exit

    return 0; //it define program is built sucessfully
}
