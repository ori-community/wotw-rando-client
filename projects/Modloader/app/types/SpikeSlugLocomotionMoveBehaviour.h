#pragma once
#include <Modloader/app/structs/SpikeSlugLocomotionMoveBehaviour.h>
#include <Modloader/app/structs/SpikeSlugLocomotionMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotionMoveBehaviour {
        inline app::SpikeSlugLocomotionMoveBehaviour__Class** type_info() {
            static app::SpikeSlugLocomotionMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotionMoveBehaviour__Class>(type_info(), "", "SpikeSlugLocomotionMoveBehaviour");
        }
        inline app::SpikeSlugLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpikeSlugLocomotionMoveBehaviour
} // namespace app::classes::types
