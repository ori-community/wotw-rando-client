#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlArrayItemAttributes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlArrayItemAttributes__Class** type_info;
        inline app::XmlArrayItemAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayItemAttributes__Class>(type_info, "System.Xml.Serialization", "XmlArrayItemAttributes");
        }
        inline app::XmlArrayItemAttributes* create() {
            return il2cpp::create_object<app::XmlArrayItemAttributes>(get_class());
        }
    } // namespace XmlArrayItemAttributes
} // namespace app::classes::types
