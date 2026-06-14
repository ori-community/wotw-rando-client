#pragma once
#include <Modloader/app/structs/SandWormAnimationPlayer.h>
#include <Modloader/app/structs/SandWormAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormAnimationPlayer {
        inline app::SandWormAnimationPlayer__Class** type_info() {
            static app::SandWormAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormAnimationPlayer__Class>(type_info(), "Moon.Timeline", "SandWormAnimationPlayer");
        }
        inline app::SandWormAnimationPlayer* create() {
            return il2cpp::create_object<app::SandWormAnimationPlayer>(get_class());
        }
    } // namespace SandWormAnimationPlayer
} // namespace app::classes::types
