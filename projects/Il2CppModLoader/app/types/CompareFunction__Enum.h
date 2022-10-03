#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompareFunction__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompareFunction__Enum__Class** type_info;
        inline app::CompareFunction__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompareFunction__Enum__Class>(type_info, "UnityEngine.Rendering", "CompareFunction");
        }
        inline app::CompareFunction__Enum* create() {
            return il2cpp::create_object<app::CompareFunction__Enum>(get_class());
        }
    } // namespace CompareFunction__Enum
} // namespace app::classes::types
