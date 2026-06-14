#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationInstance__Array {
        inline app::MoonAnimator_AnimationInstance__Array__Class** type_info() {
            static app::MoonAnimator_AnimationInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_AnimationInstance__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B0B8));
            }
            return cache;
        }
        inline app::MoonAnimator_AnimationInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_AnimationInstance__Array__Class>(type_info(), "Moon", "MoonAnimator+AnimationInstance[]");
        }
        inline app::MoonAnimator_AnimationInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_AnimationInstance__Array
} // namespace app::classes::types
