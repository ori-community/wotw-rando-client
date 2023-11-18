#pragma once
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#include <Modloader/app/structs/VolumeEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEntityLocomotion {
        inline app::VolumeEntityLocomotion__Class** type_info() {
            static app::VolumeEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEntityLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::VolumeEntityLocomotion__Class>(type_info(), "Moon", "VolumeEntityLocomotion");
        }
        inline app::VolumeEntityLocomotion* create() {
            return il2cpp::create_object<app::VolumeEntityLocomotion>(get_class());
        }
    } // namespace VolumeEntityLocomotion
} // namespace app::classes::types
