#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour__Class.h>
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour.h>

namespace app::classes::types {
    namespace LocomotionAirMoveTimelineBehaviour {
        namespace {
            inline app::LocomotionAirMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionAirMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionAirMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAirMoveTimelineBehaviour__Class>(type_info, "", "LocomotionAirMoveTimelineBehaviour");
        }
        inline app::LocomotionAirMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionAirMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionAirMoveTimelineBehaviour
} // namespace app::classes::types
