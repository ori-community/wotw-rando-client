#pragma once
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/AirEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AirEntityLocomotion {
        inline app::AirEntityLocomotion__Class** type_info() {
            static app::AirEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AirEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x047547E8));
            }
            return cache;
        }
        inline app::AirEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AirEntityLocomotion__Class>(type_info(), "Moon", "AirEntityLocomotion");
        }
        inline app::AirEntityLocomotion* create() {
            return il2cpp::create_object<app::AirEntityLocomotion>(get_class());
        }
    } // namespace AirEntityLocomotion
} // namespace app::classes::types
