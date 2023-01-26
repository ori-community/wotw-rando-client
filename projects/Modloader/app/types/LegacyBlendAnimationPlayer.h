#pragma once
#include <Modloader/app/structs/LegacyBlendAnimationPlayer.h>
#include <Modloader/app/structs/LegacyBlendAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBlendAnimationPlayer {
        inline app::LegacyBlendAnimationPlayer__Class** type_info() {
            static app::LegacyBlendAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyBlendAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyBlendAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyBlendAnimationPlayer__Class>(type_info(), "", "LegacyBlendAnimationPlayer");
        }
        inline app::LegacyBlendAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyBlendAnimationPlayer>(get_class());
        }
    } // namespace LegacyBlendAnimationPlayer
} // namespace app::classes::types
