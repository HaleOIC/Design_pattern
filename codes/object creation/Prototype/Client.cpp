class MainForm : public Form{
private:

    ISplitter*  prototype;//原型对象

public:
    
    MainForm(ISplitter* prototype){
        this->prototype = prototype;
    }
    
	void Button1_Click(){

		ISplitter * splitter=
            prototype->clone(); //clone prototype
        
        splitter->split();
        
	}
};



