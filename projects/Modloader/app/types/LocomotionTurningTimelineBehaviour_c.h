#pragma once
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour_c.h>
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionTurningTimelineBehaviour_c {
        inline app::LocomotionTurningTimelineBehaviour_c__Class** type_info() {
            static app::LocomotionTurningTimelineBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionTurningTimelineBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04700AB0));
            }
            return cache;
        }
        inline app::LocomotionTurningTimelineBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionTurningTimelineBehaviour_c__Class>(type_info(), "", "LocomotionTurningTimelineBehaviour", "<>c");
        }
        inline app::LocomotionTurningTimelineBehaviour_c* create() {
            return il2cpp::create_object<app::LocomotionTurningTimelineBehaviour_c>(get_class());
        }
    } // namespace LocomotionTurningTimelineBehaviour_c
} // namespace app::classes::types
