#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationCurve3D {
        inline app::AnimationCurve3D__Class** type_info = (app::AnimationCurve3D__Class**)(modloader::win::memory::resolve_rva(0x04721180));
        inline app::AnimationCurve3D__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve3D__Class>(type_info, "Moon.Timeline", "AnimationCurve3D");
        }
        inline app::AnimationCurve3D* create() {
            return il2cpp::create_object<app::AnimationCurve3D>(get_class());
        }
    } // namespace AnimationCurve3D
} // namespace app::classes::types
