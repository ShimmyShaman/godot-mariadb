#include "register_types.h"
#include "core/object/class_db.h"
#include "mariadb.h"

void initialize_mariadb_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SERVERS) {
		return;
	}

	ClassDB::register_class<MariaDB>();
}

void uninitialize_mariadb_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SERVERS) {
		return;
	}
}
