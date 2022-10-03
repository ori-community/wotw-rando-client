#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_XmlNodeIdentety {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlToDatasetMap_XmlNodeIdentety__Class** type_info;
        inline app::XmlToDatasetMap_XmlNodeIdentety__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_XmlNodeIdentety__Class>(type_info, "System.Data", "XmlToDatasetMap", "XmlNodeIdentety");
        }
        inline app::XmlToDatasetMap_XmlNodeIdentety* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_XmlNodeIdentety>(get_class());
        }
    } // namespace XmlToDatasetMap_XmlNodeIdentety
} // namespace app::classes::types
