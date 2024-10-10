#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "Seg2ChainPlugin.h"

void Seg2ChainPlugin::input(std::string file) {
 inputfile = file;
}

void Seg2ChainPlugin::run() {}

void Seg2ChainPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_segid-to-chain";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<Seg2ChainPlugin> Seg2ChainPluginProxy = PluginProxy<Seg2ChainPlugin>("Seg2Chain", PluginManager::getInstance());
