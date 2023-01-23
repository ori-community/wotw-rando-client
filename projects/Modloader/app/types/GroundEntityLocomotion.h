#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundEntityLocomotion__Class.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>

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
