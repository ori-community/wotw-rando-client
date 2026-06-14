#pragma once
#include <Modloader/app/structs/TouchScreenKeyboard_Status__Enum.h>
#include <Modloader/app/structs/TouchScreenKeyboard_Status__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchScreenKeyboard_Status__Enum {
        inline app::TouchScreenKeyboard_Status__Enum__Class** type_info() {
            static app::TouchScreenKeyboard_Status__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchScreenKeyboard_Status__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchScreenKeyboard_Status__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TouchScreenKeyboard_Status__Enum__Class>(type_info(), "UnityEngine", "TouchScreenKeyboard", "Status");
        }
        inline app::TouchScreenKeyboard_Status__Enum* create() {
            return il2cpp::create_object<app::TouchScreenKeyboard_Status__Enum>(get_class());
        }
    } // namespace TouchScreenKeyboard_Status__Enum
} // namespace app::classes::types
