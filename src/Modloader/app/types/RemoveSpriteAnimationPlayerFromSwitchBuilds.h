#pragma once
#include <Modloader/app/structs/RemoveSpriteAnimationPlayerFromSwitchBuilds.h>
#include <Modloader/app/structs/RemoveSpriteAnimationPlayerFromSwitchBuilds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveSpriteAnimationPlayerFromSwitchBuilds {
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class** type_info() {
            static app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class* get_class() {
            return il2cpp::get_class<app::RemoveSpriteAnimationPlayerFromSwitchBuilds__Class>(type_info(), "Moon.Timeline", "RemoveSpriteAnimationPlayerFromSwitchBuilds");
        }
        inline app::RemoveSpriteAnimationPlayerFromSwitchBuilds* create() {
            return il2cpp::create_object<app::RemoveSpriteAnimationPlayerFromSwitchBuilds>(get_class());
        }
    } // namespace RemoveSpriteAnimationPlayerFromSwitchBuilds
} // namespace app::classes::types
