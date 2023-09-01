class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>student;
        int i=0,c=0;
        for(int i=0;i<students.size();i++)
        student.push(students[i]);
       while(c<student.size()&&i< sandwiches.size())
        {if(student.front()==sandwiches[i])
        {student.pop();i++;c=0;}
         else {
             student.push(student.front());
             student.pop();
             c++;
         }
        }return c;
    }
};