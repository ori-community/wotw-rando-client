#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationState {
        inline app::AnimationState__Class** type_info = (app::AnimationState__Class**)(modloader::win::memory::resolve_rva(0x0472B288));
        inline app::AnimationState__Class* get_class() {
            return il2cpp::get_class<app::AnimationState__Class>(type_info, "UnityEngine", "AnimationState");
        }
        inline app::AnimationState* create() {
            return il2cpp::create_object<app::AnimationState>(get_class());
        }
    } // namespace AnimationState
} // namespace app::classes::types
