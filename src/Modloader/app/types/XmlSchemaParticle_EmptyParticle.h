#pragma once
#include <Modloader/app/structs/XmlSchemaParticle_EmptyParticle.h>
#include <Modloader/app/structs/XmlSchemaParticle_EmptyParticle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle_EmptyParticle {
        inline app::XmlSchemaParticle_EmptyParticle__Class** type_info() {
            static app::XmlSchemaParticle_EmptyParticle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaParticle_EmptyParticle__Class**)(modloader::win::memory::resolve_rva(0x04761D68));
            }
            return cache;
        }
        inline app::XmlSchemaParticle_EmptyParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaParticle_EmptyParticle__Class>(type_info(), "System.Xml.Schema", "XmlSchemaParticle", "EmptyParticle");
        }
        inline app::XmlSchemaParticle_EmptyParticle* create() {
            return il2cpp::create_object<app::XmlSchemaParticle_EmptyParticle>(get_class());
        }
    } // namespace XmlSchemaParticle_EmptyParticle
} // namespace app::classes::types
