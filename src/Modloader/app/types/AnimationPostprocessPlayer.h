#pragma once
#include <Modloader/app/structs/AnimationPostprocessPlayer.h>
#include <Modloader/app/structs/AnimationPostprocessPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessPlayer {
        inline app::AnimationPostprocessPlayer__Class** type_info() {
            static app::AnimationPostprocessPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPostprocessPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessPlayer__Class>(type_info(), "Moon.Timeline", "AnimationPostprocessPlayer");
        }
        inline app::AnimationPostprocessPlayer* create() {
            return il2cpp::create_object<app::AnimationPostprocessPlayer>(get_class());
        }
    } // namespace AnimationPostprocessPlayer
} // namespace app::classes::types
