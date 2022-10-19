#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TouchScreenKeyboard {
        namespace {
            inline app::TouchScreenKeyboard__Class* type_info_ref = nullptr;
        }
        inline app::TouchScreenKeyboard__Class** type_info = &type_info_ref;
        inline app::TouchScreenKeyboard__Class* get_class() {
            return il2cpp::get_class<app::TouchScreenKeyboard__Class>(type_info, "UnityEngine", "TouchScreenKeyboard");
        }
        inline app::TouchScreenKeyboard* create() {
            return il2cpp::create_object<app::TouchScreenKeyboard>(get_class());
        }
    } // namespace TouchScreenKeyboard
} // namespace app::classes::types
