#pragma once
#include <Modloader/app/structs/MoonAnimationPlayer.h>
#include <Modloader/app/structs/MoonAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationPlayer {
        inline app::MoonAnimationPlayer__Class** type_info() {
            static app::MoonAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationPlayer__Class>(type_info(), "Moon", "MoonAnimationPlayer");
        }
        inline app::MoonAnimationPlayer* create() {
            return il2cpp::create_object<app::MoonAnimationPlayer>(get_class());
        }
    } // namespace MoonAnimationPlayer
} // namespace app::classes::types
