#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapElementInfoList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapElementInfoList__Class** type_info;
        inline app::XmlTypeMapElementInfoList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapElementInfoList__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapElementInfoList");
        }
        inline app::XmlTypeMapElementInfoList* create() {
            return il2cpp::create_object<app::XmlTypeMapElementInfoList>(get_class());
        }
    } // namespace XmlTypeMapElementInfoList
} // namespace app::classes::types
