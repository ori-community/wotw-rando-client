#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntPref {
        namespace {
            app::IntPref__Class* type_info_ref = nullptr;
        }
        app::IntPref__Class** type_info = &type_info_ref;
        inline app::IntPref__Class* get_class() {
            return il2cpp::get_class<app::IntPref__Class>(type_info, "Moon.PlayerPrefsUtility", "IntPref");
        }
        inline app::IntPref* create() {
            return il2cpp::create_object<app::IntPref>(get_class());
        }
    } // namespace IntPref
} // namespace app::classes::types
