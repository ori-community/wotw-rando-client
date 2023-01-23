#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo__Class.h>
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_TableSchemaInfo {
        inline app::XmlToDatasetMap_TableSchemaInfo__Class** type_info = (app::XmlToDatasetMap_TableSchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x04704FE0));
        inline app::XmlToDatasetMap_TableSchemaInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_TableSchemaInfo__Class>(type_info, "System.Data", "XmlToDatasetMap", "TableSchemaInfo");
        }
        inline app::XmlToDatasetMap_TableSchemaInfo* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_TableSchemaInfo>(get_class());
        }
    } // namespace XmlToDatasetMap_TableSchemaInfo
} // namespace app::classes::types
