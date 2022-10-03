#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlToDatasetMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlToDatasetMap__Class** type_info;
        inline app::XmlToDatasetMap__Class* get_class() {
            return il2cpp::get_class<app::XmlToDatasetMap__Class>(type_info, "System.Data", "XmlToDatasetMap");
        }
        inline app::XmlToDatasetMap* create() {
            return il2cpp::create_object<app::XmlToDatasetMap>(get_class());
        }
    } // namespace XmlToDatasetMap
} // namespace app::classes::types
