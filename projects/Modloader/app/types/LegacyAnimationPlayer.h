#pragma once
#include <Modloader/app/structs/LegacyAnimationPlayer.h>
#include <Modloader/app/structs/LegacyAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimationPlayer {
        inline app::LegacyAnimationPlayer__Class** type_info() {
            static app::LegacyAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimationPlayer__Class>(type_info(), "", "LegacyAnimationPlayer");
        }
        inline app::LegacyAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyAnimationPlayer>(get_class());
        }
    } // namespace LegacyAnimationPlayer
} // namespace app::classes::types
