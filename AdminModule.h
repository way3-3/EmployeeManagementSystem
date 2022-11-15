#ifndef AdminModule_H
#define AdminModule_H
#include "AdminModule.h"
#include "ManagerModule.h"
#include "Employee.h"
// #include "two.h"
#include <bits/stdc++.h>
using namespace std;


class adminModule : public managerModule , public Employee
{
    public:
        int x,n,found;
        int usedID;
        string managerName,managerId,testId, managerGender, managerPost, managerSalary, adminUsername, adminPass;
        adminModule();
        void menuAdminModule();
        void adminLogin();
        void managerLogin();
        //void employeeLogin();
        void adminMenu();
        void managerCreate();
        void managerRead();
        void managerUpdate();
        void managerDelete();
        void adminPassUserChange();

            protected:

            private:
};

#endif // ONE_H
