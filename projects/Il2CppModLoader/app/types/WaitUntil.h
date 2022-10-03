#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitUntil {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitUntil__Class** type_info;
        inline app::WaitUntil__Class* get_class() {
            return il2cpp::get_class<app::WaitUntil__Class>(type_info, "UnityEngine", "WaitUntil");
        }
        inline app::WaitUntil* create() {
            return il2cpp::create_object<app::WaitUntil>(get_class());
        }
    } // namespace WaitUntil
} // namespace app::classes::types
