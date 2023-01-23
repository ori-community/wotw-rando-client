#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo.h>
#include <Modloader/app/structs/DataTable.h>

namespace app::classes::System::Data::XmlToDatasetMap_TableSchemaInfo {
    IL2CPP_REGISTER_METHOD(0x03055B40, void, ctor, (app::XmlToDatasetMap_TableSchemaInfo * this_ptr, app::DataTable* table_schema))
}
