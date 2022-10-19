#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundEntityLocomotion {
        inline app::GroundEntityLocomotion__Class** type_info = (app::GroundEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0470CFD8));
        inline app::GroundEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityLocomotion__Class>(type_info, "Moon", "GroundEntityLocomotion");
        }
        inline app::GroundEntityLocomotion* create() {
            return il2cpp::create_object<app::GroundEntityLocomotion>(get_class());
        }
    } // namespace GroundEntityLocomotion
} // namespace app::classes::types
