#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaRedefine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaRedefine__Class** type_info;
        inline app::XmlSchemaRedefine__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaRedefine__Class>(type_info, "System.Xml.Schema", "XmlSchemaRedefine");
        }
        inline app::XmlSchemaRedefine* create() {
            return il2cpp::create_object<app::XmlSchemaRedefine>(get_class());
        }
    } // namespace XmlSchemaRedefine
} // namespace app::classes::types
