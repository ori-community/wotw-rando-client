#pragma once
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchScreenKeyboardType__Enum {
        inline app::TouchScreenKeyboardType__Enum__Class** type_info() {
            static app::TouchScreenKeyboardType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchScreenKeyboardType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchScreenKeyboardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TouchScreenKeyboardType__Enum__Class>(type_info(), "UnityEngine", "TouchScreenKeyboardType");
        }
        inline app::TouchScreenKeyboardType__Enum* create() {
            return il2cpp::create_object<app::TouchScreenKeyboardType__Enum>(get_class());
        }
    } // namespace TouchScreenKeyboardType__Enum
} // namespace app::classes::types
