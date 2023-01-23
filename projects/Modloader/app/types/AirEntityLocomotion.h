#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AirEntityLocomotion__Class.h>
#include <Modloader/app/structs/AirEntityLocomotion.h>

namespace app::classes::types {
    namespace AirEntityLocomotion {
        inline app::AirEntityLocomotion__Class** type_info = (app::AirEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x047547E8));
        inline app::AirEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AirEntityLocomotion__Class>(type_info, "Moon", "AirEntityLocomotion");
        }
        inline app::AirEntityLocomotion* create() {
            return il2cpp::create_object<app::AirEntityLocomotion>(get_class());
        }
    } // namespace AirEntityLocomotion
} // namespace app::classes::types
