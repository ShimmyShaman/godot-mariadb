
#ifndef MARIADB_REGISTER_TYPES_H
#define MARIADB_REGISTER_TYPES_H

#include "modules/register_module_types.h"

void initialize_mariadb_module(ModuleInitializationLevel p_level);
void uninitialize_mariadb_module(ModuleInitializationLevel p_level);

#endif // MARIADB_REGISTER_TYPES_H
