class Solution {
public:
    string reverseWords(string str) {
    string temp="";
    //First find the mirror image of String
    for(int i=0,j=str.length()-1 ; i<j;i++,j--){

            swap(str.at(i),str.at(j));

    }

    stack<char> st;

    // Traverse given string and push all characters
    // to stack until we see a space.
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ')
            st.push(str[i]);

        // When we see a space, we print contents
        // of stack.
        else {
            while (st.empty() == false) {
                //cout << st.top();
                temp+=st.top();
                st.pop();
            }
            temp+=" ";
            //cout << " ";
        }
    }

    // Since there may not be space after
    // last word.
    while (st.empty() == false) {

        //cout << st.top();
    temp+=st.top();
        st.pop();
    }
    //cout<<"\n";
    //cout<<temp;
    return temp;
}
};
