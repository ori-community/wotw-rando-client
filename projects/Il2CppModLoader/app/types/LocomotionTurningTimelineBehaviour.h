#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionTurningTimelineBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocomotionTurningTimelineBehaviour__Class** type_info;
        inline app::LocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTurningTimelineBehaviour__Class>(type_info, "", "LocomotionTurningTimelineBehaviour");
        }
        inline app::LocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionTurningTimelineBehaviour
} // namespace app::classes::types
