#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaGroupBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaGroupBase__Class** type_info;
        inline app::XmlSchemaGroupBase__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroupBase__Class>(type_info, "System.Xml.Schema", "XmlSchemaGroupBase");
        }
        inline app::XmlSchemaGroupBase* create() {
            return il2cpp::create_object<app::XmlSchemaGroupBase>(get_class());
        }
    } // namespace XmlSchemaGroupBase
} // namespace app::classes::types
