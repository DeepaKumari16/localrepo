//Task 4: Build a simple console-based to-do list manager that allows users to add, view and delete tasks.

#include<iostream>
#include<map>
#include<string>
using namespace std;

class task_list{
    
    public:
        map<string,string> taskMap;
        map<string,string> :: iterator iter;
        string task_name;

        void task_input();
        void add_task();
        void view_tasks();
        void mark_as_comp();
        void remove_task();
};

void task_list::task_input(){

    
    cout<<"Input the task which you want to add to the list"<<endl;
    cin>>task_name;
    taskMap[task_name] = "Incomplete";

}

void task_list::add_task(){
    task_input();
    cout<<"Task added Successfully."<<endl;
}

void task_list::view_tasks(){

    for(iter=taskMap.begin();iter!=taskMap.end();iter++){
        cout<<"Task: "<<(*iter).first<<"\tSTATUS "<<(*iter).second<<endl;
    }
}

void task_list::mark_as_comp(){
    cout<<"Input task which you want to mark as complete"<<endl;
    cin>>task_name;
    for(iter=taskMap.begin();iter!=taskMap.end();iter++){
        if((*iter).first==task_name){
            (*iter).second = "Complete";
        }
        
    }
    cout<<"Task marked as Complete."<<endl;
}

void task_list::remove_task(){

    cout<<"Input the task which you want to remove from list"<<endl;
    cin>>task_name;

    iter=taskMap.find(task_name);
    taskMap.erase(iter);
        
        cout<<"Task Deleted successfully."<<endl;
}

int main(){
    task_list t;
    int ch;

    cout<<"Welcome to To-Do-List"<<endl;
    cout<<"Help yourself in managing tasks!"<<endl;
    
    do{
        cout<<"\nPress 1 To Add a Task\nPress 2 To View all tasks\nPress 3 To mark a Task as Complete\nPress 4 to Remove a Task\nPress 5 to exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            t.add_task();
            break;
        case 2:
            t.view_tasks();
            break;
        case 3:
            t.mark_as_comp();
            break;
        case 4:
            t.remove_task();
            break;
        case 5:
            break;
        default:
            cout<<"Wrong choice entered."<<endl;
            break;
        }
    }while(ch!=5);
    
    return 0;
}