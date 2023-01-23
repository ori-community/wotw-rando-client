#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TouchScreenKeyboard__Class.h>
#include <Modloader/app/structs/TouchScreenKeyboard.h>

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
