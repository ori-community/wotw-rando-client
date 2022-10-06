#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaParticle__Class** type_info;
        inline app::XmlSchemaParticle__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaParticle__Class>(type_info, "System.Xml.Schema", "XmlSchemaParticle");
        }
        inline app::XmlSchemaParticle* create() {
            return il2cpp::create_object<app::XmlSchemaParticle>(get_class());
        }
        inline app::XmlSchemaParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaParticle__Array>(get_class(), size);
        }
        inline app::XmlSchemaParticle__Array* create_array(const std::vector<app::XmlSchemaParticle*>& items) {
            return il2cpp::array_new<app::XmlSchemaParticle__Array>(get_class(), items);
        }
    } // namespace XmlSchemaParticle
} // namespace app::classes::types
