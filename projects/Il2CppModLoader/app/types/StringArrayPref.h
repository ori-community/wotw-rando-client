#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringArrayPref {
        namespace {
            app::StringArrayPref__Class* type_info_ref = nullptr;
        }
        app::StringArrayPref__Class** type_info = &type_info_ref;
        inline app::StringArrayPref__Class* get_class() {
            return il2cpp::get_class<app::StringArrayPref__Class>(type_info, "Moon.PlayerPrefsUtility", "StringArrayPref");
        }
        inline app::StringArrayPref* create() {
            return il2cpp::create_object<app::StringArrayPref>(get_class());
        }
    } // namespace StringArrayPref
} // namespace app::classes::types
