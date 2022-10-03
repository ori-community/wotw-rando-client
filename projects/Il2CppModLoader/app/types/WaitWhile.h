#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitWhile {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitWhile__Class** type_info;
        inline app::WaitWhile__Class* get_class() {
            return il2cpp::get_class<app::WaitWhile__Class>(type_info, "UnityEngine", "WaitWhile");
        }
        inline app::WaitWhile* create() {
            return il2cpp::create_object<app::WaitWhile>(get_class());
        }
    } // namespace WaitWhile
} // namespace app::classes::types
