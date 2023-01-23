#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour__Class.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour {
        namespace {
            inline app::SkeetoLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotionIdleBehaviour__Class>(type_info, "", "SkeetoLocomotionIdleBehaviour");
        }
        inline app::SkeetoLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour
} // namespace app::classes::types
