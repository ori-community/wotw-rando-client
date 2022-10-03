#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveDirection__Enum {
        namespace {
            app::MoveDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::MoveDirection__Enum__Class** type_info = &type_info_ref;
        inline app::MoveDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoveDirection__Enum__Class>(type_info, "UnityEngine.EventSystems", "MoveDirection");
        }
        inline app::MoveDirection__Enum* create() {
            return il2cpp::create_object<app::MoveDirection__Enum>(get_class());
        }
    } // namespace MoveDirection__Enum
} // namespace app::classes::types
