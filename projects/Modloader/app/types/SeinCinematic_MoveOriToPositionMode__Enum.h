#pragma once
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum.h>
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCinematic_MoveOriToPositionMode__Enum {
        inline app::SeinCinematic_MoveOriToPositionMode__Enum__Class** type_info() {
            static app::SeinCinematic_MoveOriToPositionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCinematic_MoveOriToPositionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCinematic_MoveOriToPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCinematic_MoveOriToPositionMode__Enum__Class>(type_info(), "", "SeinCinematic", "MoveOriToPositionMode");
        }
        inline app::SeinCinematic_MoveOriToPositionMode__Enum* create() {
            return il2cpp::create_object<app::SeinCinematic_MoveOriToPositionMode__Enum>(get_class());
        }
    } // namespace SeinCinematic_MoveOriToPositionMode__Enum
} // namespace app::classes::types
