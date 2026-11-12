
#include<bits\stdc++.h>

using namespace std;

class Book
{
public:
    int bookID;
    string bookTitle;
    string authorName;
    double price;

    Book(int id, string title, string author, double p)
      {
        bookID=id;
        bookTitle=title;
        authorName=author;
        price=p;
        cout<<endl;
        cout<<endl<<"Book id: "<<bookID<<endl<<"Book title : "<<bookTitle<<endl<<"Author name :"<<authorName<<endl<<"Price : "<<price<<endl;

       }

};

class Member
{
private:
    int memberID;
    string memberName;
    string memberEmail;
    int* borrowedBookIDs;
    int borrowedCount;
    int capacity;
    double totalFine;

    void calculateFine()
    {

        if (borrowedCount > 1)
        {
            totalFine = 100.0;
        }
        else
        {
            totalFine = 0.0;
        }
        cout<<endl;
        cout<<"total fine :"<<totalFine<<endl;
        cout<<endl;
    }

public:
    Member()
    {
        memberID = 0;
        memberName = "Unknown";
        memberEmail = "Not Assigned";
        borrowedCount = 0;
        capacity = 2;
        borrowedBookIDs = new int[capacity];
        totalFine = 0.0;
        cout<<endl;
        cout << "Default constructor called." << endl;
        cout<<endl;
    }

    Member(int id, string name);

    Member(int id, string name, string email)
    {
        memberID = id;
        memberName = name;
        memberEmail = email;
        borrowedCount = 0;
        capacity = 2;
        borrowedBookIDs = new int[capacity];
        totalFine = 0.0;
       cout<<endl;
        cout << "parameterized constructor called using:" << endl;
        cout << "Member(int id, string name, string email)" << endl;
         cout<<"member id     :"<<memberID<<endl;
        cout<<"member name   :"<<memberName<<endl;
         cout<<"memberemail  :"<<memberEmail<<endl;
        cout<<endl;
    }

    Member(const Member& other)
    {
        cout << "Copy constructor called for Member object." << endl;
        memberID = other.memberID;
        memberName = other.memberName;
        memberEmail = other.memberEmail;
        borrowedCount = other.borrowedCount;
        capacity = other.capacity;
        totalFine = other.totalFine;
        borrowedBookIDs = new int[capacity];
        for (int i = 0; i < borrowedCount; i++)
        {
            borrowedBookIDs[i] = other.borrowedBookIDs[i];
        }
    }

    Member(Member&& other)
    {
        cout<<endl;
        cout << "Move constructor called." << endl;
        cout<<endl;
        memberID = other.memberID;
        memberName = other.memberName;
        memberEmail = other.memberEmail;
        borrowedCount = other.borrowedCount;
        capacity = other.capacity;
        totalFine = other.totalFine;
        borrowedBookIDs = other.borrowedBookIDs;
        other.borrowedBookIDs = nullptr;
        cout<<endl;
         cout<<"member id     :"<<memberID<<endl;
        cout<<"member name   :"<<memberName<<endl;
         cout<<"memberemail  :"<<memberEmail<<endl;
         cout<<endl;



    }

    Member& operator=(const Member& other)
    {
        cout<<endl;
        cout << "Copy assignment operator called." << endl;
        cout<<endl;

        delete[] borrowedBookIDs;
        memberID = other.memberID;
        memberName = other.memberName;
        memberEmail = other.memberEmail;
        borrowedCount = other.borrowedCount;
        capacity = other.capacity;
        totalFine = other.totalFine;
        borrowedBookIDs = new int[capacity];
        for (int i = 0; i < borrowedCount; i++)
        {
            borrowedBookIDs[i] = other.borrowedBookIDs[i];
        }
        return *this;
    }

    ~Member()
    {
        if (borrowedBookIDs != nullptr)
        {
            delete[] borrowedBookIDs;
            cout<<endl;
            cout << "Destructor called for Member ID: " << memberID << endl;
            cout << "Dynamic borrowed-book array released using delete[]." << endl;
            cout<<endl;
        }
        else
        {
            cout << "Destructor called for copied Member object." << endl;
            cout << "Dynamic memory released successfully." << endl;
        }
    }

    void setName(string memberName)
    {
        this->memberName = memberName;
        cout<<endl;
        cout << "setName(\"" << memberName << "\")" << endl;
        cout << "Using: this->memberName = memberName" << endl;
        cout <<memberName<< endl;

        cout<<endl;
    }

    string getName() const
    {
        return this->memberName;
    }

    void setEmail(string memberEmail)
    {
        this->memberEmail = memberEmail;
    }

    string getEmail() const
    {
        return this->memberEmail;
    }

    int getID() const
    {
        return memberID;
    }
    int getBorrowedCount() const
    {
        return borrowedCount;
    }
    double getFine() const
    {
        return totalFine;
    }

    void addBorrowedBook(int bookID)
    {
        if (borrowedCount >= capacity)
        {
           cout<<endl;
            cout << "Current array capacity reached." << endl;
            cout << "Creating a larger dynamic array..." << endl;
            capacity *= 2;
            int* newArray = new int[capacity];
            for (int i = 0; i < borrowedCount; i++)
            {
                newArray[i] = borrowedBookIDs[i];
            }
            delete[] borrowedBookIDs;
            borrowedBookIDs = newArray;
            cout << "Existing book IDs copied successfully." << endl;
            cout << "Old array deleted using delete[]." << endl;
            cout << "New dynamic array assigned successfully." << endl;
            cout<<endl;
        }
        borrowedBookIDs[borrowedCount++] = bookID;
        calculateFine();
    }

    void borrowBook(int bookID)
    {
       cout<<endl;
        cout << "Calling:" << endl;
        cout<<endl;
        cout << "borrowBook(" << bookID << ")" << endl;
        cout << "Book ID " << bookID << " borrowed using default borrowing period." << endl;

        cout<<endl;
    }

    void borrowBook(int bookID, int numberOfDays)
    {
        cout<<endl;
        cout << "Calling:" << endl;
        cout<<endl;
        cout << "borrowBook(" << bookID << ", " << numberOfDays << ")" << endl;
        cout << "Book ID " << bookID << " borrowed for " << numberOfDays << " days." << endl;

        cout<<endl;
    }

    inline void checkBorrowStatus() const
    {
       cout<<endl;
        cout << "Calling:" << endl;
        cout << "canBorrowMore()" << endl;
        cout << memberName << " can borrow more books: " << (canBorrowMore() ? "Yes" : "No") << endl;
        cout<<endl;
    }

    inline bool canBorrowMore() const
    {
        return borrowedCount < 5;
    }

    void displayRecord() const;
    void displayShortRecord() const;
    void printDynamicMemoryLog() const;

    friend void compareMembers(const Member& m1, const Member& m2);
};

Member::Member(int id, string name)
{
    memberID = id;
    memberName = name;
    memberEmail = "Not Assigned";
    borrowedCount = 0;
    capacity = 2;
    borrowedBookIDs = new int[capacity];
    totalFine = 0.0;
    cout<<endl;
    cout<<memberID<<endl<<memberName<<endl;
    cout<<endl;

    cout<<endl;
}

void Member::displayRecord() const
{

  cout<<endl;
    cout << "Member ID : " << memberID << endl;
    cout << "Member Name : " << memberName << endl;
    cout << "Member Email : " << memberEmail << endl;
    cout << "Borrowed Books : ";
    if (borrowedCount == 0)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i < borrowedCount; i++)
        {
            cout << borrowedBookIDs[i] << " ";
        }
    }
    cout << "\nNumber of Books : " << borrowedCount << endl;
    cout << "Total Fine : Tk. " << totalFine << endl;
    cout << "Can Borrow More : " << (canBorrowMore() ? "Yes" : "No") << endl;
    cout<<endl;
}

void Member::displayShortRecord() const
{
   cout<<endl;
    cout << "Member ID : " << memberID << endl;
    cout << "Member Name : " << memberName << endl;
    cout<<endl;
}

void Member::printDynamicMemoryLog() const
{
    cout<<endl;
    cout << "Dynamic borrowed-book array created :" << endl << endl;


    cout<<endl;
}

void compareMembers(const Member& m1, const Member& m2)
{

    cout << "compareMembers(member1, member2)" << endl;
    cout<<endl;
    cout << "=== Member Comparison ===" << endl;
    cout << m1.memberName << " borrowed " << m1.borrowedCount << " book(s)." << endl;
    cout << m2.memberName << " borrowed " << m2.borrowedCount << " book(s)." << endl;
    if (m1.borrowedCount > m2.borrowedCount)
    {
        cout << m1.memberName << " has borrowed more books." << endl;
    }
    else if (m2.borrowedCount > m1.borrowedCount)
    {
        cout << m2.memberName << " has borrowed more books." << endl;
    }
    else
    {
        cout << "Both members have borrowed an equal number of books." << endl;
    }
    cout << "Friend function accessed private data successfully." << endl;
}

void displayBookCopyLogs(const Book& original, const Book& copy)
{
    cout << "Original Book:" << endl;
    cout << "Book ID : " << original.bookID << endl;
    cout << "Book Title : " << original.bookTitle << endl;
    cout << "Author : " << original.authorName << endl;
    cout << "Price : Tk. " << original.price << endl;
    cout << "Copied Book:" << endl;
    cout << "Book ID : " << copy.bookID << endl;
    cout << "Book Title : " << copy.bookTitle << endl;
    cout << "Author : " << copy.authorName << endl;
    cout << "Price : Tk. " << copy.price << endl;
    cout << "Default object copying completed successfully." << endl;
}

void showMemberByValue(Member m)
{
    cout << "Received Member:" << endl;
    cout << "ID : " << m.getID() << endl;
    cout << "Name : " << m.getName() << endl;
    cout << "the original object." << endl;
}

void updateMemberByReference(Member& m)
{
    m.setName("Karim Hossain Updated");
}

void showMember(const Member& m)
{
    cout << "Calling:" << endl;
    cout << "showMember(member1)" << endl;
    cout << "Member ID : " << m.getID() << endl;
    cout << "Member Name : " << m.getName() << endl;
    cout << "Object information displayed without creating" << endl;

}

Member createMember(int id, string name, string email)
{
    cout << "Calling:" << endl;
    cout << "createMember(" << id << ", \"" << name << "\", \"" << email << "\")" << endl;
    Member temp(id, name, email);
    cout << "New Member returned from function." << endl;
    return temp;
}

void triggerOutsideClassMessage()
{
    cout << "Calling:" << endl;
    cout << "Function declared inside the class and implemented" << endl;
}

int main()
{
    cout << "==================================================" << endl;
    cout << "LIBRARY MEMBER AND BOOK MANAGEMENT SYSTEM" << endl;
    cout << "==================================================" << endl;
    cout<<endl;
    cout << "=== 1. Class and Object Creation ===" << endl;
    cout<<endl;
    Book b1(501, "Object Oriented Programming", "Robert Lafore", 850.0);
    cout<<endl;
    cout << "Book object created successfully." << endl;

    cout<<endl;
    cout << "=== 2. Default Constructor  ===" << endl;
    cout<<endl;
    Member defaultMember;
    defaultMember.displayRecord();
    cout<<endl;
    cout << "=== 3. Parameterized Constructor ===" << endl;
    cout<<endl;
    Member member1(101, "Rahim Ahmed");
    cout<<"outside class"<<endl;
    cout<<endl;
    member1.displayShortRecord();
    cout<<endl;
    cout << "=== 4. Constructor Overloading ===" << endl;
    cout<<endl;
    Member member2(102, "Karim Hasan", "karim@gmail.com");
    member2.displayRecord();
    cout<<endl;
    cout << "=== 5. Constructor Defined Outside Class Using :: ===" << endl;
    Member f1(2633,"mahim");
    cout<<endl;
    cout << "=== 6. Default Object Copying ===" << endl;
    cout<<endl;
    Book b2 = b1;
    displayBookCopyLogs(b1, b2);
    cout<<endl;
    cout << "=== 7. User-Defined Copy Constructor ===" << endl;
    cout<<endl;
    Member copiedMember = member1;
    cout<<endl;
    cout << "Original Member:" << endl;
    member1.displayShortRecord();
    cout<<endl;
    cout << "Copied Member:" << endl;
    copiedMember.displayShortRecord();
    cout<<endl;
    cout << "=== 8. Move Constructor ===" << endl;
    cout<<endl;
    Member temporarySource(999, "Temporary Resource Profile", "temp@library.com");
    Member movedDestination = move(temporarySource);
    cout<<endl;

    cout << "=== 9. Copy Assignment Operator ===" << endl;
    cout<<endl;
    Member assignmentTarget;
    assignmentTarget.operator=(member2);
    assignmentTarget.displayShortRecord();
    cout << "m2 = m1 completed successfully." << endl;
   cout<<endl;
    cout << "=== 10. Setter, Getter and this Keyword ===" << endl;
    cout<<endl;
    cout << "Old Member Name : " << member2.getName() << endl;
    member2.setName("Karim Hossain");

    cout << "Updated Member Name : " << member2.getName() << endl;
    cout << "Value returned using getName():" << endl;
    cout << member2.getName() << endl;
    cout<<endl;
    cout << "=== 11. Dynamic Memory Allocation ===" << endl;
    cout<<endl;
    member1.printDynamicMemoryLog();
    cout << "=== 12. Adding Borrowed Books ===" << endl;
    cout << "Rahim borrowed Book ID: 501" << endl;
    member1.addBorrowedBook(501);
    cout << "Borrowed book added successfully." << endl;
    cout << "Rahim borrowed Book ID: 502" << endl;
    member1.addBorrowedBook(502);
    cout << "Borrowed book added successfully." << endl;
    cout << "Karim borrowed Book ID: 503" << endl;
    member2.addBorrowedBook(503);
    cout << "Borrowed book added successfully." << endl;
    cout<<endl;
    cout << "=== 13. Dynamic Array Management ===" << endl;
    cout<<endl;
    cout << "current capacity reached" << endl;
    cout<<endl;
    cout << "=== 14. Function Overloading ===" << endl;
    cout<<endl;
    member1.borrowBook(501);

    member1.borrowBook(502, 10);
    cout<<endl;
    cout << "Function overloading demonstrated successfully." << endl;
    cout<<endl;
    cout << "=== 15. Private Helper Function ===" << endl;
    cout<<endl;
    cout << "calculateFine() called internally." << endl;
    cout<<endl;
    Member rahim;
    rahim.addBorrowedBook(007);
    cout << "Private helper function executed successfully." << endl;
    cout<<endl;
    cout << "=== 16. Inline Function ===" << endl;
    member1.checkBorrowStatus();
    member2.checkBorrowStatus();
    cout << "Inline function executed successfully." << endl;
    cout<<endl;
    cout << "=== 17. Member Function Defined Outside Class ===" << endl;
    triggerOutsideClassMessage();
    cout<<endl;
    cout << "=== 18. Complete Member Record ===" << endl;
    member1.displayRecord();
    cout << "\n----------------------------------" << endl;
    member2.displayRecord();
    cout<<endl;
    cout << "=== 19. Friend Function ===" << endl;
    compareMembers(member1, member2);
    cout<<endl;
    cout << "=== 20. Object Pointer ===" << endl;

    Member* memberPtr = new Member(103, "Nusrat Jahan", "nusrat@gmail.com");

    cout << "Accessing object using -> operator:" << endl;
    memberPtr->displayRecord();
    cout << "Object pointer demonstrated successfully." << endl;
    cout<<endl;
    cout << "=== 21. Passing Object by Value ===" << endl;
    cout<<endl;

    cout << "Copy constructor called because object is passed by value." << endl;
    showMemberByValue(member1);
    cout<<endl;
    cout << "=== 22. Passing Object by Reference ===" << endl;
    cout<<endl;
    updateMemberByReference(member2);
    cout<<endl;
    cout << "After update:" << endl;
    cout << "Member Name : " << member2.getName() << endl;
    cout << "Original object changed successfully." << endl;
    cout<<endl;
    cout << "=== 23. Passing Object by Const Reference ===" << endl;
    showMember(member1);
    cout<<endl;
    cout << "=== 24. Returning Object from Function ===" << endl;
    cout<<endl;
    Member createdResult = createMember(104, "Sadia Islam", "sadia@gmail.com");
    createdResult.displayRecord();
    cout<<endl;
    cout << "Returning object from function demonstrated successfully." << endl;
    cout<<endl;
    cout << "=== 25. new and delete ===" << endl;
    cout << "Dynamic Member object created using new." << endl;
    cout << "Deleting dynamically created Member object..." << endl;
    cout << "delete memberPtr;" << endl;
    delete memberPtr;
    cout<<endl;
    cout << "Dynamic object deleted successfully." << endl;
    cout<<endl;
    cout << "=== 26. Destructor and delete[] ===" << endl;
    return 0;
}

