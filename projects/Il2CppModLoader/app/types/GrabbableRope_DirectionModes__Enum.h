#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableRope_DirectionModes__Enum {
        namespace {
            app::GrabbableRope_DirectionModes__Enum__Class* type_info_ref = nullptr;
        }
        app::GrabbableRope_DirectionModes__Enum__Class** type_info = &type_info_ref;
        inline app::GrabbableRope_DirectionModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableRope_DirectionModes__Enum__Class>(type_info, "", "GrabbableRope", "DirectionModes");
        }
        inline app::GrabbableRope_DirectionModes__Enum* create() {
            return il2cpp::create_object<app::GrabbableRope_DirectionModes__Enum>(get_class());
        }
    } // namespace GrabbableRope_DirectionModes__Enum
} // namespace app::classes::types
