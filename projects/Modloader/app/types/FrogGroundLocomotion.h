#pragma once
#include <Modloader/app/structs/FrogGroundLocomotion.h>
#include <Modloader/app/structs/FrogGroundLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogGroundLocomotion {
        inline app::FrogGroundLocomotion__Class** type_info() {
            static app::FrogGroundLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrogGroundLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04781E88));
            }
            return cache;
        }
        inline app::FrogGroundLocomotion__Class* get_class() {
            return il2cpp::get_class<app::FrogGroundLocomotion__Class>(type_info(), "", "FrogGroundLocomotion");
        }
        inline app::FrogGroundLocomotion* create() {
            return il2cpp::create_object<app::FrogGroundLocomotion>(get_class());
        }
    } // namespace FrogGroundLocomotion
} // namespace app::classes::types
