#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocomotionGoal__Class.h>
#include <Modloader/app/structs/LocomotionGoal.h>

namespace app::classes::types {
    namespace LocomotionGoal {
        namespace {
            inline app::LocomotionGoal__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionGoal__Class** type_info = &type_info_ref;
        inline app::LocomotionGoal__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGoal__Class>(type_info, "Moon", "LocomotionGoal");
        }
        inline app::LocomotionGoal* create() {
            return il2cpp::create_object<app::LocomotionGoal>(get_class());
        }
    } // namespace LocomotionGoal
} // namespace app::classes::types
