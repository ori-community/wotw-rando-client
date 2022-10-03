#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlChoiceIdentifierAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlChoiceIdentifierAttribute__Class** type_info;
        inline app::XmlChoiceIdentifierAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlChoiceIdentifierAttribute__Class>(type_info, "System.Xml.Serialization", "XmlChoiceIdentifierAttribute");
        }
        inline app::XmlChoiceIdentifierAttribute* create() {
            return il2cpp::create_object<app::XmlChoiceIdentifierAttribute>(get_class());
        }
    } // namespace XmlChoiceIdentifierAttribute
} // namespace app::classes::types
