#pragma once
#include <Modloader/app/structs/ComboMoveState__Enum.h>
#include <Modloader/app/structs/ComboMoveState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMoveState__Enum {
        inline app::ComboMoveState__Enum__Class** type_info() {
            static app::ComboMoveState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboMoveState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboMoveState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveState__Enum__Class>(type_info(), "Moon.ComboSystem", "ComboMoveState");
        }
        inline app::ComboMoveState__Enum* create() {
            return il2cpp::create_object<app::ComboMoveState__Enum>(get_class());
        }
    } // namespace ComboMoveState__Enum
} // namespace app::classes::types
