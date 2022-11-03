#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionTurningBehaviour {
        namespace {
            inline app::LocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTurningBehaviour__Class>(type_info, "", "LocomotionTurningBehaviour");
        }
        inline app::LocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::LocomotionTurningBehaviour>(get_class());
        }
    } // namespace LocomotionTurningBehaviour
} // namespace app::classes::types
