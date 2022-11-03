#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardLocomotionTurningTimelineBehaviour {
        namespace {
            inline app::LizardLocomotionTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardLocomotionTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardLocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotionTurningTimelineBehaviour__Class>(type_info, "", "LizardLocomotionTurningTimelineBehaviour");
        }
        inline app::LizardLocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::LizardLocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace LizardLocomotionTurningTimelineBehaviour
} // namespace app::classes::types
