#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteInEditMode__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecuteInEditMode__Array__Class** type_info;
        inline app::ExecuteInEditMode__Array__Class* get_class() {
            return il2cpp::get_class<app::ExecuteInEditMode__Array__Class>(type_info, "UnityEngine", "ExecuteInEditMode[]");
        }
        inline app::ExecuteInEditMode__Array* create() {
            return il2cpp::create_object<app::ExecuteInEditMode__Array>(get_class());
        }
    } // namespace ExecuteInEditMode__Array
} // namespace app::classes::types
