#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_KeyCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObject_KeyCollection__Class** type_info;
        inline app::ExpandoObject_KeyCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_KeyCollection__Class>(type_info, "System.Dynamic", "ExpandoObject", "KeyCollection");
        }
        inline app::ExpandoObject_KeyCollection* create() {
            return il2cpp::create_object<app::ExpandoObject_KeyCollection>(get_class());
        }
    } // namespace ExpandoObject_KeyCollection
} // namespace app::classes::types
