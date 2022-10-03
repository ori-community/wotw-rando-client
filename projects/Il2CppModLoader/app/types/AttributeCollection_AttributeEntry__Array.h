#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeCollection_AttributeEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeCollection_AttributeEntry__Array__Class** type_info;
        inline app::AttributeCollection_AttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributeCollection_AttributeEntry__Array__Class>(type_info, "System.ComponentModel", "AttributeCollection+AttributeEntry[]");
        }
        inline app::AttributeCollection_AttributeEntry__Array* create() {
            return il2cpp::create_object<app::AttributeCollection_AttributeEntry__Array>(get_class());
        }
    } // namespace AttributeCollection_AttributeEntry__Array
} // namespace app::classes::types
