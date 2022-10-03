#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionAnimatorEntity_PositionMovementType__Enum {
        namespace {
            app::PositionAnimatorEntity_PositionMovementType__Enum__Class* type_info_ref = nullptr;
        }
        app::PositionAnimatorEntity_PositionMovementType__Enum__Class** type_info = &type_info_ref;
        inline app::PositionAnimatorEntity_PositionMovementType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionAnimatorEntity_PositionMovementType__Enum__Class>(type_info, "Moon.Timeline", "PositionAnimatorEntity", "PositionMovementType");
        }
        inline app::PositionAnimatorEntity_PositionMovementType__Enum* create() {
            return il2cpp::create_object<app::PositionAnimatorEntity_PositionMovementType__Enum>(get_class());
        }
    } // namespace PositionAnimatorEntity_PositionMovementType__Enum
} // namespace app::classes::types
