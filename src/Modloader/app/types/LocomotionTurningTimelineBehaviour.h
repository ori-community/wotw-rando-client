#pragma once
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionTurningTimelineBehaviour {
        inline app::LocomotionTurningTimelineBehaviour__Class** type_info() {
            static app::LocomotionTurningTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionTurningTimelineBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0477F1C0));
            }
            return cache;
        }
        inline app::LocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTurningTimelineBehaviour__Class>(type_info(), "", "LocomotionTurningTimelineBehaviour");
        }
        inline app::LocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionTurningTimelineBehaviour
} // namespace app::classes::types
