#pragma once
#include <Modloader/app/structs/XmlSchemaParticle__Array.h>
#include <Modloader/app/structs/XmlSchemaParticle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaParticle__Array {
        inline app::XmlSchemaParticle__Array__Class** type_info() {
            static app::XmlSchemaParticle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x0471C1D0));
            }
            return cache;
        }
        inline app::XmlSchemaParticle__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaParticle__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchemaParticle[]");
        }
        inline app::XmlSchemaParticle__Array* create() {
            return il2cpp::create_object<app::XmlSchemaParticle__Array>(get_class());
        }
    } // namespace XmlSchemaParticle__Array
} // namespace app::classes::types
