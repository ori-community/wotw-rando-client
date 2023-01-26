#pragma once
#include <Modloader/app/structs/AnimationMetaDataBasedSoundPlayer.h>
#include <Modloader/app/structs/AnimationMetaDataBasedSoundPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataBasedSoundPlayer {
        inline app::AnimationMetaDataBasedSoundPlayer__Class** type_info() {
            static app::AnimationMetaDataBasedSoundPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMetaDataBasedSoundPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMetaDataBasedSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataBasedSoundPlayer__Class>(type_info(), "", "AnimationMetaDataBasedSoundPlayer");
        }
        inline app::AnimationMetaDataBasedSoundPlayer* create() {
            return il2cpp::create_object<app::AnimationMetaDataBasedSoundPlayer>(get_class());
        }
    } // namespace AnimationMetaDataBasedSoundPlayer
} // namespace app::classes::types
