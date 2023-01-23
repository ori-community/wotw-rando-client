#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocomotionIdleBehaviour__Class.h>
#include <Modloader/app/structs/LocomotionIdleBehaviour.h>

namespace app::classes::types {
    namespace LocomotionIdleBehaviour {
        namespace {
            inline app::LocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleBehaviour__Class>(type_info, "", "LocomotionIdleBehaviour");
        }
        inline app::LocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleBehaviour>(get_class());
        }
    } // namespace LocomotionIdleBehaviour
} // namespace app::classes::types
