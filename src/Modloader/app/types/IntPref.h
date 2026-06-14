#pragma once
#include <Modloader/app/structs/IntPref.h>
#include <Modloader/app/structs/IntPref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPref {
        inline app::IntPref__Class** type_info() {
            static app::IntPref__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntPref__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntPref__Class* get_class() {
            return il2cpp::get_class<app::IntPref__Class>(type_info(), "Moon.PlayerPrefsUtility", "IntPref");
        }
        inline app::IntPref* create() {
            return il2cpp::create_object<app::IntPref>(get_class());
        }
    } // namespace IntPref
} // namespace app::classes::types
