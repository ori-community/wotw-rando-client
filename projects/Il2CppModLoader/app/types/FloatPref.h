#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatPref {
        namespace {
            inline app::FloatPref__Class* type_info_ref = nullptr;
        }
        inline app::FloatPref__Class** type_info = &type_info_ref;
        inline app::FloatPref__Class* get_class() {
            return il2cpp::get_class<app::FloatPref__Class>(type_info, "Moon.PlayerPrefsUtility", "FloatPref");
        }
        inline app::FloatPref* create() {
            return il2cpp::create_object<app::FloatPref>(get_class());
        }
    } // namespace FloatPref
} // namespace app::classes::types
