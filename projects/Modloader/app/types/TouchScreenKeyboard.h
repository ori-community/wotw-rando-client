#pragma once
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#include <Modloader/app/structs/TouchScreenKeyboard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchScreenKeyboard {
        inline app::TouchScreenKeyboard__Class** type_info() {
            static app::TouchScreenKeyboard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchScreenKeyboard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchScreenKeyboard__Class* get_class() {
            return il2cpp::get_class<app::TouchScreenKeyboard__Class>(type_info(), "UnityEngine", "TouchScreenKeyboard");
        }
        inline app::TouchScreenKeyboard* create() {
            return il2cpp::create_object<app::TouchScreenKeyboard>(get_class());
        }
    } // namespace TouchScreenKeyboard
} // namespace app::classes::types
