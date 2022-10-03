#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatatypeImplementation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatatypeImplementation__Class** type_info;
        inline app::DatatypeImplementation__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation__Class>(type_info, "System.Xml.Schema", "DatatypeImplementation");
        }
        inline app::DatatypeImplementation* create() {
            return il2cpp::create_object<app::DatatypeImplementation>(get_class());
        }
        inline app::DatatypeImplementation__Array* create_array(int size) {
            return il2cpp::array_new<app::DatatypeImplementation__Array>(get_class(), size);
        }
    } // namespace DatatypeImplementation
} // namespace app::classes::types
