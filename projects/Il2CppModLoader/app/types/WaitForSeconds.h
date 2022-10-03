#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForSeconds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForSeconds__Class** type_info;
        inline app::WaitForSeconds__Class* get_class() {
            return il2cpp::get_class<app::WaitForSeconds__Class>(type_info, "UnityEngine", "WaitForSeconds");
        }
        inline app::WaitForSeconds* create() {
            return il2cpp::create_object<app::WaitForSeconds>(get_class());
        }
    } // namespace WaitForSeconds
} // namespace app::classes::types
