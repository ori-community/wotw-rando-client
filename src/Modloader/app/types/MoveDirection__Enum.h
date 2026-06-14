#pragma once
#include <Modloader/app/structs/MoveDirection__Enum.h>
#include <Modloader/app/structs/MoveDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveDirection__Enum {
        inline app::MoveDirection__Enum__Class** type_info() {
            static app::MoveDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoveDirection__Enum__Class>(type_info(), "UnityEngine.EventSystems", "MoveDirection");
        }
        inline app::MoveDirection__Enum* create() {
            return il2cpp::create_object<app::MoveDirection__Enum>(get_class());
        }
    } // namespace MoveDirection__Enum
} // namespace app::classes::types
