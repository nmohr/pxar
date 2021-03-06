#ifndef PIXTESTPRETEST_H
#define PIXTESTPRETEST_H

#include "api.h"
#include "PixTest.hh"

class PixTestPretest: public PixTest {
public:
  PixTestPretest(PixSetup *, std::string);
  PixTestPretest();
  virtual ~PixTestPretest();
  virtual bool setParameter(std::string parName, std::string sval); 
  void init(); 
  void setToolTips();
  void runCommand(std::string); 
  void bookHist(std::string); 
  
  void doTest(); 
  void setCalDel();
  void setVana();
  void setVthrCompId();
  void saveDacs(); 

private:

  int     fParNtrig; 
  int     fTargetIa; 

  ClassDef(PixTestPretest, 1);

};
#endif
