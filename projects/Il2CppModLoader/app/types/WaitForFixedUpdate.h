#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForFixedUpdate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForFixedUpdate__Class** type_info;
        inline app::WaitForFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::WaitForFixedUpdate__Class>(type_info, "UnityEngine", "WaitForFixedUpdate");
        }
        inline app::WaitForFixedUpdate* create() {
            return il2cpp::create_object<app::WaitForFixedUpdate>(get_class());
        }
    } // namespace WaitForFixedUpdate
} // namespace app::classes::types
