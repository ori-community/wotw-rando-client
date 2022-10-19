#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPrefs {
        namespace {
            inline app::PlayerPrefs__Class* type_info_ref = nullptr;
        }
        inline app::PlayerPrefs__Class** type_info = &type_info_ref;
        inline app::PlayerPrefs__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefs__Class>(type_info, "UnityEngine", "PlayerPrefs");
        }
        inline app::PlayerPrefs* create() {
            return il2cpp::create_object<app::PlayerPrefs>(get_class());
        }
    } // namespace PlayerPrefs
} // namespace app::classes::types
