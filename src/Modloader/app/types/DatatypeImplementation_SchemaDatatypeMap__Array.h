#pragma once
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Array.h>
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation_SchemaDatatypeMap__Array {
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array__Class** type_info() {
            static app::DatatypeImplementation_SchemaDatatypeMap__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DatatypeImplementation_SchemaDatatypeMap__Array__Class**)(modloader::win::memory::resolve_rva(0x047492C8));
            }
            return cache;
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation_SchemaDatatypeMap__Array__Class>(type_info(), "System.Xml.Schema", "DatatypeImplementation+SchemaDatatypeMap[]");
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create() {
            return il2cpp::create_object<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class());
        }
    } // namespace DatatypeImplementation_SchemaDatatypeMap__Array
} // namespace app::classes::types
