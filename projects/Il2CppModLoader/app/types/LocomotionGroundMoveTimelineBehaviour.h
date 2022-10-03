#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionGroundMoveTimelineBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocomotionGroundMoveTimelineBehaviour__Class** type_info;
        inline app::LocomotionGroundMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGroundMoveTimelineBehaviour__Class>(type_info, "", "LocomotionGroundMoveTimelineBehaviour");
        }
        inline app::LocomotionGroundMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionGroundMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionGroundMoveTimelineBehaviour
} // namespace app::classes::types
