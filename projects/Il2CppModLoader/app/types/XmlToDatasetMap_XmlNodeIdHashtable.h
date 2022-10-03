#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlToDatasetMap_XmlNodeIdHashtable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlToDatasetMap_XmlNodeIdHashtable__Class** type_info;
        inline app::XmlToDatasetMap_XmlNodeIdHashtable__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlToDatasetMap_XmlNodeIdHashtable__Class>(type_info, "System.Data", "XmlToDatasetMap", "XmlNodeIdHashtable");
        }
        inline app::XmlToDatasetMap_XmlNodeIdHashtable* create() {
            return il2cpp::create_object<app::XmlToDatasetMap_XmlNodeIdHashtable>(get_class());
        }
    } // namespace XmlToDatasetMap_XmlNodeIdHashtable
} // namespace app::classes::types
