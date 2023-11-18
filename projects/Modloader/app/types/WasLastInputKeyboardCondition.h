#pragma once
#include <Modloader/app/structs/WasLastInputKeyboardCondition.h>
#include <Modloader/app/structs/WasLastInputKeyboardCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WasLastInputKeyboardCondition {
        inline app::WasLastInputKeyboardCondition__Class** type_info() {
            static app::WasLastInputKeyboardCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WasLastInputKeyboardCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WasLastInputKeyboardCondition__Class* get_class() {
            return il2cpp::get_class<app::WasLastInputKeyboardCondition__Class>(type_info(), "", "WasLastInputKeyboardCondition");
        }
        inline app::WasLastInputKeyboardCondition* create() {
            return il2cpp::create_object<app::WasLastInputKeyboardCondition>(get_class());
        }
    } // namespace WasLastInputKeyboardCondition
} // namespace app::classes::types
