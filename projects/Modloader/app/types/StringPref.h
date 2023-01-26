#pragma once
#include <Modloader/app/structs/StringPref.h>
#include <Modloader/app/structs/StringPref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringPref {
        inline app::StringPref__Class** type_info() {
            static app::StringPref__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringPref__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringPref__Class* get_class() {
            return il2cpp::get_class<app::StringPref__Class>(type_info(), "Moon.PlayerPrefsUtility", "StringPref");
        }
        inline app::StringPref* create() {
            return il2cpp::create_object<app::StringPref>(get_class());
        }
    } // namespace StringPref
} // namespace app::classes::types
