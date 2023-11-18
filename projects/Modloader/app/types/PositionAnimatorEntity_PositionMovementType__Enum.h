#pragma once
#include <Modloader/app/structs/PositionAnimatorEntity_PositionMovementType__Enum.h>
#include <Modloader/app/structs/PositionAnimatorEntity_PositionMovementType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionAnimatorEntity_PositionMovementType__Enum {
        inline app::PositionAnimatorEntity_PositionMovementType__Enum__Class** type_info() {
            static app::PositionAnimatorEntity_PositionMovementType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionAnimatorEntity_PositionMovementType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionAnimatorEntity_PositionMovementType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionAnimatorEntity_PositionMovementType__Enum__Class>(type_info(), "Moon.Timeline", "PositionAnimatorEntity", "PositionMovementType");
        }
        inline app::PositionAnimatorEntity_PositionMovementType__Enum* create() {
            return il2cpp::create_object<app::PositionAnimatorEntity_PositionMovementType__Enum>(get_class());
        }
    } // namespace PositionAnimatorEntity_PositionMovementType__Enum
} // namespace app::classes::types
