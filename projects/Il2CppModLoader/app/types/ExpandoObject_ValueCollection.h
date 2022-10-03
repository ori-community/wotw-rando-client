#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_ValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObject_ValueCollection__Class** type_info;
        inline app::ExpandoObject_ValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ValueCollection__Class>(type_info, "System.Dynamic", "ExpandoObject", "ValueCollection");
        }
        inline app::ExpandoObject_ValueCollection* create() {
            return il2cpp::create_object<app::ExpandoObject_ValueCollection>(get_class());
        }
    } // namespace ExpandoObject_ValueCollection
} // namespace app::classes::types
