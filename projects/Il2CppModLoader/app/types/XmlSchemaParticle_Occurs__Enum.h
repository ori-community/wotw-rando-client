#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle_Occurs__Enum {
        namespace {
            app::XmlSchemaParticle_Occurs__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSchemaParticle_Occurs__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaParticle_Occurs__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaParticle_Occurs__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaParticle", "Occurs");
        }
        inline app::XmlSchemaParticle_Occurs__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaParticle_Occurs__Enum>(get_class());
        }
    } // namespace XmlSchemaParticle_Occurs__Enum
} // namespace app::classes::types
