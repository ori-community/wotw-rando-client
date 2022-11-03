#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationRemoveScalePlayable {
        inline app::AnimationRemoveScalePlayable__Class** type_info = (app::AnimationRemoveScalePlayable__Class**)(modloader::win::memory::resolve_rva(0x047368C0));
        inline app::AnimationRemoveScalePlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationRemoveScalePlayable__Class>(type_info, "UnityEngine.Animations", "AnimationRemoveScalePlayable");
        }
        inline app::AnimationRemoveScalePlayable* create() {
            return il2cpp::create_object<app::AnimationRemoveScalePlayable>(get_class());
        }
        inline app::AnimationRemoveScalePlayable__Boxed* box(app::AnimationRemoveScalePlayable value) {
            return il2cpp::box_value<app::AnimationRemoveScalePlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationRemoveScalePlayable
} // namespace app::classes::types
