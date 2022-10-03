#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapElementInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapElementInfo__Class** type_info;
        inline app::XmlTypeMapElementInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapElementInfo__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapElementInfo");
        }
        inline app::XmlTypeMapElementInfo* create() {
            return il2cpp::create_object<app::XmlTypeMapElementInfo>(get_class());
        }
    } // namespace XmlTypeMapElementInfo
} // namespace app::classes::types
