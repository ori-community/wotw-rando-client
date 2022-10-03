#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaParticle__Array__Class** type_info;
        inline app::XmlSchemaParticle__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaParticle__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaParticle[]");
        }
        inline app::XmlSchemaParticle__Array* create() {
            return il2cpp::create_object<app::XmlSchemaParticle__Array>(get_class());
        }
    } // namespace XmlSchemaParticle__Array
} // namespace app::classes::types
