#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimePlatform__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimePlatform__Enum__Class** type_info;
        inline app::RuntimePlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuntimePlatform__Enum__Class>(type_info, "UnityEngine", "RuntimePlatform");
        }
        inline app::RuntimePlatform__Enum* create() {
            return il2cpp::create_object<app::RuntimePlatform__Enum>(get_class());
        }
    } // namespace RuntimePlatform__Enum
} // namespace app::classes::types
