#pragma once
#include <Modloader/app/structs/LegacyPostprocessAnimationPlayer.h>
#include <Modloader/app/structs/LegacyPostprocessAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyPostprocessAnimationPlayer {
        inline app::LegacyPostprocessAnimationPlayer__Class** type_info() {
            static app::LegacyPostprocessAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyPostprocessAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyPostprocessAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyPostprocessAnimationPlayer__Class>(type_info(), "", "LegacyPostprocessAnimationPlayer");
        }
        inline app::LegacyPostprocessAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyPostprocessAnimationPlayer>(get_class());
        }
    } // namespace LegacyPostprocessAnimationPlayer
} // namespace app::classes::types
