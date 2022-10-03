#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAnyAttributeAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAnyAttributeAttribute__Class** type_info;
        inline app::XmlAnyAttributeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyAttributeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAnyAttributeAttribute");
        }
        inline app::XmlAnyAttributeAttribute* create() {
            return il2cpp::create_object<app::XmlAnyAttributeAttribute>(get_class());
        }
    } // namespace XmlAnyAttributeAttribute
} // namespace app::classes::types
