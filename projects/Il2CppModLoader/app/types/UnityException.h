#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityException__Class** type_info;
        inline app::UnityException__Class* get_class() {
            return il2cpp::get_class<app::UnityException__Class>(type_info, "UnityEngine", "UnityException");
        }
        inline app::UnityException* create() {
            return il2cpp::create_object<app::UnityException>(get_class());
        }
    } // namespace UnityException
} // namespace app::classes::types
