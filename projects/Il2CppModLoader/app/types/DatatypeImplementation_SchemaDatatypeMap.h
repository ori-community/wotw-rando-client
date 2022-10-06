#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation_SchemaDatatypeMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatatypeImplementation_SchemaDatatypeMap__Class** type_info;
        inline app::DatatypeImplementation_SchemaDatatypeMap__Class* get_class() {
            return il2cpp::get_nested_class<app::DatatypeImplementation_SchemaDatatypeMap__Class>(type_info, "System.Xml.Schema", "DatatypeImplementation", "SchemaDatatypeMap");
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap* create() {
            return il2cpp::create_object<app::DatatypeImplementation_SchemaDatatypeMap>(get_class());
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create_array(int size) {
            return il2cpp::array_new<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class(), size);
        }
        inline app::DatatypeImplementation_SchemaDatatypeMap__Array* create_array(const std::vector<app::DatatypeImplementation_SchemaDatatypeMap*>& items) {
            return il2cpp::array_new<app::DatatypeImplementation_SchemaDatatypeMap__Array>(get_class(), items);
        }
    } // namespace DatatypeImplementation_SchemaDatatypeMap
} // namespace app::classes::types
