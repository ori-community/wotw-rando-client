#pragma once
#include <Modloader/app/structs/StringArrayPref.h>
#include <Modloader/app/structs/StringArrayPref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringArrayPref {
        inline app::StringArrayPref__Class** type_info() {
            static app::StringArrayPref__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringArrayPref__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringArrayPref__Class* get_class() {
            return il2cpp::get_class<app::StringArrayPref__Class>(type_info(), "Moon.PlayerPrefsUtility", "StringArrayPref");
        }
        inline app::StringArrayPref* create() {
            return il2cpp::create_object<app::StringArrayPref>(get_class());
        }
    } // namespace StringArrayPref
} // namespace app::classes::types
