#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationInstance__Array {
        inline app::MoonAnimator_AnimationInstance__Array__Class** type_info = (app::MoonAnimator_AnimationInstance__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B0B8));
        inline app::MoonAnimator_AnimationInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_AnimationInstance__Array__Class>(type_info, "Moon", "MoonAnimator+AnimationInstance[]");
        }
        inline app::MoonAnimator_AnimationInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_AnimationInstance__Array
} // namespace app::classes::types
