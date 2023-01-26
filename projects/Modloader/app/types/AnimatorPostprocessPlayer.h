#pragma once
#include <Modloader/app/structs/AnimatorPostprocessPlayer.h>
#include <Modloader/app/structs/AnimatorPostprocessPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorPostprocessPlayer {
        inline app::AnimatorPostprocessPlayer__Class** type_info() {
            static app::AnimatorPostprocessPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorPostprocessPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPostprocessPlayer__Class>(type_info(), "Moon.Animation", "AnimatorPostprocessPlayer");
        }
        inline app::AnimatorPostprocessPlayer* create() {
            return il2cpp::create_object<app::AnimatorPostprocessPlayer>(get_class());
        }
    } // namespace AnimatorPostprocessPlayer
} // namespace app::classes::types
