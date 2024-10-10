#ifndef SEG2CHAINPLUGIN_H
#define SEG2CHAINPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class Seg2ChainPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Seg2Chain";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
