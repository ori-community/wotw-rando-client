#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForEndOfFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForEndOfFrame__Class** type_info;
        inline app::WaitForEndOfFrame__Class* get_class() {
            return il2cpp::get_class<app::WaitForEndOfFrame__Class>(type_info, "UnityEngine", "WaitForEndOfFrame");
        }
        inline app::WaitForEndOfFrame* create() {
            return il2cpp::create_object<app::WaitForEndOfFrame>(get_class());
        }
    } // namespace WaitForEndOfFrame
} // namespace app::classes::types
