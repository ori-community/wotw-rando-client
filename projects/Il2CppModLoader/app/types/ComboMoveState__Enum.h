#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboMoveState__Enum {
        namespace {
            app::ComboMoveState__Enum__Class* type_info_ref = nullptr;
        }
        app::ComboMoveState__Enum__Class** type_info = &type_info_ref;
        inline app::ComboMoveState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveState__Enum__Class>(type_info, "Moon.ComboSystem", "ComboMoveState");
        }
        inline app::ComboMoveState__Enum* create() {
            return il2cpp::create_object<app::ComboMoveState__Enum>(get_class());
        }
    } // namespace ComboMoveState__Enum
} // namespace app::classes::types
