#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataBasedSoundPlayer {
        namespace {
            app::AnimationMetaDataBasedSoundPlayer__Class* type_info_ref = nullptr;
        }
        app::AnimationMetaDataBasedSoundPlayer__Class** type_info = &type_info_ref;
        inline app::AnimationMetaDataBasedSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataBasedSoundPlayer__Class>(type_info, "", "AnimationMetaDataBasedSoundPlayer");
        }
        inline app::AnimationMetaDataBasedSoundPlayer* create() {
            return il2cpp::create_object<app::AnimationMetaDataBasedSoundPlayer>(get_class());
        }
    } // namespace AnimationMetaDataBasedSoundPlayer
} // namespace app::classes::types
