#pragma once
#include <Modloader/app/structs/XmlSchemaParticle_Occurs__Enum.h>
#include <Modloader/app/structs/XmlSchemaParticle_Occurs__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle_Occurs__Enum {
        inline app::XmlSchemaParticle_Occurs__Enum__Class** type_info() {
            static app::XmlSchemaParticle_Occurs__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaParticle_Occurs__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaParticle_Occurs__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaParticle_Occurs__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaParticle", "Occurs");
        }
        inline app::XmlSchemaParticle_Occurs__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaParticle_Occurs__Enum>(get_class());
        }
    } // namespace XmlSchemaParticle_Occurs__Enum
} // namespace app::classes::types
