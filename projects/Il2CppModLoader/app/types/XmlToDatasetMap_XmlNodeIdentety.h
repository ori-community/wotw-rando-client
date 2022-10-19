#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_XmlNodeIdentety {
        inline app::XmlToDatasetMap_XmlNodeIdentety__Class** type_info = (app::XmlToDatasetMap_XmlNodeIdentety__Class**)(modloader::win::memory::resolve_rva(0x04781540));
        inline app::XmlToDatasetMap_XmlNodeIdentety__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_XmlNodeIdentety__Class>(type_info, "System.Data", "XmlToDatasetMap", "XmlNodeIdentety");
        }
        inline app::XmlToDatasetMap_XmlNodeIdentety* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_XmlNodeIdentety>(get_class());
        }
    } // namespace XmlToDatasetMap_XmlNodeIdentety
} // namespace app::classes::types
