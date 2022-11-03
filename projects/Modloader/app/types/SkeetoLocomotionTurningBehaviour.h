#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoLocomotionTurningBehaviour {
        namespace {
            inline app::SkeetoLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoLocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotionTurningBehaviour__Class>(type_info, "", "SkeetoLocomotionTurningBehaviour");
        }
        inline app::SkeetoLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::SkeetoLocomotionTurningBehaviour>(get_class());
        }
    } // namespace SkeetoLocomotionTurningBehaviour
} // namespace app::classes::types
