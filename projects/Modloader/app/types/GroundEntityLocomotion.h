#pragma once
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEntityLocomotion {
        inline app::GroundEntityLocomotion__Class** type_info() {
            static app::GroundEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GroundEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0470CFD8));
            }
            return cache;
        }
        inline app::GroundEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityLocomotion__Class>(type_info(), "Moon", "GroundEntityLocomotion");
        }
        inline app::GroundEntityLocomotion* create() {
            return il2cpp::create_object<app::GroundEntityLocomotion>(get_class());
        }
    } // namespace GroundEntityLocomotion
} // namespace app::classes::types
