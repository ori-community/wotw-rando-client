#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaIdentityConstraint {
        inline app::XmlSchemaIdentityConstraint__Class** type_info = (app::XmlSchemaIdentityConstraint__Class**)(modloader::win::memory::resolve_rva(0x047312D8));
        inline app::XmlSchemaIdentityConstraint__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaIdentityConstraint__Class>(type_info, "System.Xml.Schema", "XmlSchemaIdentityConstraint");
        }
        inline app::XmlSchemaIdentityConstraint* create() {
            return il2cpp::create_object<app::XmlSchemaIdentityConstraint>(get_class());
        }
    } // namespace XmlSchemaIdentityConstraint
} // namespace app::classes::types
