#pragma once
#include <Modloader/app/structs/SoundCompositionSoundVolumeAnimator.h>
#include <Modloader/app/structs/SoundCompositionSoundVolumeAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionSoundVolumeAnimator {
        inline app::SoundCompositionSoundVolumeAnimator__Class** type_info() {
            static app::SoundCompositionSoundVolumeAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionSoundVolumeAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionSoundVolumeAnimator__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionSoundVolumeAnimator__Class>(type_info(), "", "SoundCompositionSoundVolumeAnimator");
        }
        inline app::SoundCompositionSoundVolumeAnimator* create() {
            return il2cpp::create_object<app::SoundCompositionSoundVolumeAnimator>(get_class());
        }
    } // namespace SoundCompositionSoundVolumeAnimator
} // namespace app::classes::types
