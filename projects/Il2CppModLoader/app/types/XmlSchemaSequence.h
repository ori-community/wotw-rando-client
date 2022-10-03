#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSequence__Class** type_info;
        inline app::XmlSchemaSequence__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSequence__Class>(type_info, "System.Xml.Schema", "XmlSchemaSequence");
        }
        inline app::XmlSchemaSequence* create() {
            return il2cpp::create_object<app::XmlSchemaSequence>(get_class());
        }
    } // namespace XmlSchemaSequence
} // namespace app::classes::types
