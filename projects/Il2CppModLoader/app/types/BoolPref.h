#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoolPref {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BoolPref__Class** type_info;
        inline app::BoolPref__Class* get_class() {
            return il2cpp::get_class<app::BoolPref__Class>(type_info, "Moon.PlayerPrefsUtility", "BoolPref");
        }
        inline app::BoolPref* create() {
            return il2cpp::create_object<app::BoolPref>(get_class());
        }
    } // namespace BoolPref
} // namespace app::classes::types
