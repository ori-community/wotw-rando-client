#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsymLocomotionTurningTimelineBehaviour__Class.h>
#include <Modloader/app/structs/AsymLocomotionTurningTimelineBehaviour.h>

namespace app::classes::types {
    namespace AsymLocomotionTurningTimelineBehaviour {
        namespace {
            inline app::AsymLocomotionTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::AsymLocomotionTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::AsymLocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionTurningTimelineBehaviour__Class>(type_info, "", "AsymLocomotionTurningTimelineBehaviour");
        }
        inline app::AsymLocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace AsymLocomotionTurningTimelineBehaviour
} // namespace app::classes::types
