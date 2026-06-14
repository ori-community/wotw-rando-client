#pragma once
#include <Modloader/app/structs/Utility_MoveDirection__Enum.h>
#include <Modloader/app/structs/Utility_MoveDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utility_MoveDirection__Enum {
        inline app::Utility_MoveDirection__Enum__Class** type_info() {
            static app::Utility_MoveDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Utility_MoveDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Utility_MoveDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Utility_MoveDirection__Enum__Class>(type_info(), "", "Utility", "MoveDirection");
        }
        inline app::Utility_MoveDirection__Enum* create() {
            return il2cpp::create_object<app::Utility_MoveDirection__Enum>(get_class());
        }
    } // namespace Utility_MoveDirection__Enum
} // namespace app::classes::types
