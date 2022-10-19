#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrabbableSurfaceMovingWheel {
        inline app::GrabbableSurfaceMovingWheel__Class** type_info = (app::GrabbableSurfaceMovingWheel__Class**)(modloader::win::memory::resolve_rva(0x0475D8F8));
        inline app::GrabbableSurfaceMovingWheel__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurfaceMovingWheel__Class>(type_info, "", "GrabbableSurfaceMovingWheel");
        }
        inline app::GrabbableSurfaceMovingWheel* create() {
            return il2cpp::create_object<app::GrabbableSurfaceMovingWheel>(get_class());
        }
    } // namespace GrabbableSurfaceMovingWheel
} // namespace app::classes::types
