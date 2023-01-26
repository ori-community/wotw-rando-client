#pragma once
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionGroundMoveTimelineBehaviour {
        inline app::LocomotionGroundMoveTimelineBehaviour__Class** type_info() {
            static app::LocomotionGroundMoveTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionGroundMoveTimelineBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0474CE68));
            }
            return cache;
        }
        inline app::LocomotionGroundMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGroundMoveTimelineBehaviour__Class>(type_info(), "", "LocomotionGroundMoveTimelineBehaviour");
        }
        inline app::LocomotionGroundMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionGroundMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionGroundMoveTimelineBehaviour
} // namespace app::classes::types
