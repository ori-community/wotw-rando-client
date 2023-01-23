#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour__Class.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour {
        namespace {
            inline app::PiranhaLocomotionSwimmingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaLocomotionSwimmingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionSwimmingBehaviour__Class>(type_info, "", "PiranhaLocomotionSwimmingBehaviour");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour
} // namespace app::classes::types
