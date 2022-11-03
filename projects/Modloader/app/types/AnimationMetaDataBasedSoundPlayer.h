#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMetaDataBasedSoundPlayer {
        namespace {
            inline app::AnimationMetaDataBasedSoundPlayer__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMetaDataBasedSoundPlayer__Class** type_info = &type_info_ref;
        inline app::AnimationMetaDataBasedSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataBasedSoundPlayer__Class>(type_info, "", "AnimationMetaDataBasedSoundPlayer");
        }
        inline app::AnimationMetaDataBasedSoundPlayer* create() {
            return il2cpp::create_object<app::AnimationMetaDataBasedSoundPlayer>(get_class());
        }
    } // namespace AnimationMetaDataBasedSoundPlayer
} // namespace app::classes::types
