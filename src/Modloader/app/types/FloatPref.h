#pragma once
#include <Modloader/app/structs/FloatPref.h>
#include <Modloader/app/structs/FloatPref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatPref {
        inline app::FloatPref__Class** type_info() {
            static app::FloatPref__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatPref__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatPref__Class* get_class() {
            return il2cpp::get_class<app::FloatPref__Class>(type_info(), "Moon.PlayerPrefsUtility", "FloatPref");
        }
        inline app::FloatPref* create() {
            return il2cpp::create_object<app::FloatPref>(get_class());
        }
    } // namespace FloatPref
} // namespace app::classes::types
