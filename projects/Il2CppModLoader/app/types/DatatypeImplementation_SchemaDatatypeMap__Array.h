#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DatatypeImplementation_SchemaDatatypeMap__Array {
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array__Class** type_info = (app::DatatypeImplementation_SchemaDatatypeMap__Array__Class**)(modloader::win::memory::resolve_rva(0x047492C8));
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation_SchemaDatatypeMap__Array__Class>(type_info, "System.Xml.Schema", "DatatypeImplementation+SchemaDatatypeMap[]");
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create() {
            return il2cpp::create_object<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class());
        }
    } // namespace DatatypeImplementation_SchemaDatatypeMap__Array
} // namespace app::classes::types
