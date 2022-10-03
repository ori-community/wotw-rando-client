#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaForm__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaForm__Enum__Class** type_info;
        inline app::XmlSchemaForm__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaForm__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaForm");
        }
        inline app::XmlSchemaForm__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaForm__Enum>(get_class());
        }
    } // namespace XmlSchemaForm__Enum
} // namespace app::classes::types
