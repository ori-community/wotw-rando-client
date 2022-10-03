#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceMovingWheel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrabbableSurfaceMovingWheel__Class** type_info;
        inline app::GrabbableSurfaceMovingWheel__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurfaceMovingWheel__Class>(type_info, "", "GrabbableSurfaceMovingWheel");
        }
        inline app::GrabbableSurfaceMovingWheel* create() {
            return il2cpp::create_object<app::GrabbableSurfaceMovingWheel>(get_class());
        }
    } // namespace GrabbableSurfaceMovingWheel
} // namespace app::classes::types
