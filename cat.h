#ifndef CAT_H
#define CAT_H


class cat
{
    int Age;
public:
    cat(void); // default constructor
    cat(int mAge);
    ~cat(void);

    int getAge();
    void setAge(int);
};


#endif // CAT_H
