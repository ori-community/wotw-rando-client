#pragma once
#include <Modloader/app/structs/SpikeSlugLocomotionMoveTimelineBehaviour.h>
#include <Modloader/app/structs/SpikeSlugLocomotionMoveTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotionMoveTimelineBehaviour {
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour__Class** type_info() {
            static app::SpikeSlugLocomotionMoveTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugLocomotionMoveTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotionMoveTimelineBehaviour__Class>(type_info(), "", "SpikeSlugLocomotionMoveTimelineBehaviour");
        }
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotionMoveTimelineBehaviour>(get_class());
        }
    } // namespace SpikeSlugLocomotionMoveTimelineBehaviour
} // namespace app::classes::types
