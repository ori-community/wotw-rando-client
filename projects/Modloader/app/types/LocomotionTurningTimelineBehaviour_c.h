#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour_c__Class.h>
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour_c.h>

namespace app::classes::types {
    namespace LocomotionTurningTimelineBehaviour_c {
        inline app::LocomotionTurningTimelineBehaviour_c__Class** type_info = (app::LocomotionTurningTimelineBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04700AB0));
        inline app::LocomotionTurningTimelineBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionTurningTimelineBehaviour_c__Class>(type_info, "", "LocomotionTurningTimelineBehaviour", "<>c");
        }
        inline app::LocomotionTurningTimelineBehaviour_c* create() {
            return il2cpp::create_object<app::LocomotionTurningTimelineBehaviour_c>(get_class());
        }
    } // namespace LocomotionTurningTimelineBehaviour_c
} // namespace app::classes::types
