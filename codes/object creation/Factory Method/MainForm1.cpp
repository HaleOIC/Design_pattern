class MainForm : public Form
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;
	ProgressBar* progressBar;

public:
	void Button1_Click(){
        
		ISplitter * splitter=
            new BinarySplitter();//依赖具体类
        
        splitter->split();

	}
};

// According to the dependency inversion principle.
// the codes are dependent on the concrete class but not abstract class.
// We need to change the phenomenon.

