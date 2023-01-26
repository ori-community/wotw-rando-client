#pragma once
#include <Modloader/app/structs/GrabbableRope_DirectionModes__Enum.h>
#include <Modloader/app/structs/GrabbableRope_DirectionModes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableRope_DirectionModes__Enum {
        inline app::GrabbableRope_DirectionModes__Enum__Class** type_info() {
            static app::GrabbableRope_DirectionModes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrabbableRope_DirectionModes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrabbableRope_DirectionModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableRope_DirectionModes__Enum__Class>(type_info(), "", "GrabbableRope", "DirectionModes");
        }
        inline app::GrabbableRope_DirectionModes__Enum* create() {
            return il2cpp::create_object<app::GrabbableRope_DirectionModes__Enum>(get_class());
        }
    } // namespace GrabbableRope_DirectionModes__Enum
} // namespace app::classes::types
