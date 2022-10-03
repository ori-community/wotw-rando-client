#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPrefsException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerPrefsException__Class** type_info;
        inline app::PlayerPrefsException__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefsException__Class>(type_info, "UnityEngine", "PlayerPrefsException");
        }
        inline app::PlayerPrefsException* create() {
            return il2cpp::create_object<app::PlayerPrefsException>(get_class());
        }
    } // namespace PlayerPrefsException
} // namespace app::classes::types
