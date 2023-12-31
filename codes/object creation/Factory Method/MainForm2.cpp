/**
 * By using the factory method the dependencies have changed to 
 * rely on the abstract class but not the concrete class.
 */
class MainForm : public Form{
private:

	TextBox* txtFilePath;
	TextBox* txtFileNumber;
	ProgressBar* progressBar;

	// given from the client code
	Ifactory* factory;

public:

	MainForm(....) {}

	void Button1_Click(){
        
		ISplitter* splitter = factory->create();	// depend on abstract.
        splitter->split();

	}
};
