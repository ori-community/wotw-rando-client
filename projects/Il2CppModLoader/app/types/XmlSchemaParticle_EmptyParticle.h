#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle_EmptyParticle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaParticle_EmptyParticle__Class** type_info;
        inline app::XmlSchemaParticle_EmptyParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaParticle_EmptyParticle__Class>(type_info, "System.Xml.Schema", "XmlSchemaParticle", "EmptyParticle");
        }
        inline app::XmlSchemaParticle_EmptyParticle* create() {
            return il2cpp::create_object<app::XmlSchemaParticle_EmptyParticle>(get_class());
        }
    } // namespace XmlSchemaParticle_EmptyParticle
} // namespace app::classes::types
