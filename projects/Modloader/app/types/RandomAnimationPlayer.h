#pragma once
#include <Modloader/app/structs/RandomAnimationPlayer.h>
#include <Modloader/app/structs/RandomAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomAnimationPlayer {
        inline app::RandomAnimationPlayer__Class** type_info() {
            static app::RandomAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::RandomAnimationPlayer__Class>(type_info(), "", "RandomAnimationPlayer");
        }
        inline app::RandomAnimationPlayer* create() {
            return il2cpp::create_object<app::RandomAnimationPlayer>(get_class());
        }
    } // namespace RandomAnimationPlayer
} // namespace app::classes::types
