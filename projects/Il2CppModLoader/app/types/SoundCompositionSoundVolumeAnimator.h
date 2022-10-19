#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionSoundVolumeAnimator {
        namespace {
            inline app::SoundCompositionSoundVolumeAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SoundCompositionSoundVolumeAnimator__Class** type_info = &type_info_ref;
        inline app::SoundCompositionSoundVolumeAnimator__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionSoundVolumeAnimator__Class>(type_info, "", "SoundCompositionSoundVolumeAnimator");
        }
        inline app::SoundCompositionSoundVolumeAnimator* create() {
            return il2cpp::create_object<app::SoundCompositionSoundVolumeAnimator>(get_class());
        }
    } // namespace SoundCompositionSoundVolumeAnimator
} // namespace app::classes::types
