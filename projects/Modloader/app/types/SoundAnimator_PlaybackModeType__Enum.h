#pragma once
#include <Modloader/app/structs/SoundAnimator_PlaybackModeType__Enum.h>
#include <Modloader/app/structs/SoundAnimator_PlaybackModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAnimator_PlaybackModeType__Enum {
        inline app::SoundAnimator_PlaybackModeType__Enum__Class** type_info() {
            static app::SoundAnimator_PlaybackModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundAnimator_PlaybackModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundAnimator_PlaybackModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAnimator_PlaybackModeType__Enum__Class>(type_info(), "", "SoundAnimator", "PlaybackModeType");
        }
        inline app::SoundAnimator_PlaybackModeType__Enum* create() {
            return il2cpp::create_object<app::SoundAnimator_PlaybackModeType__Enum>(get_class());
        }
    } // namespace SoundAnimator_PlaybackModeType__Enum
} // namespace app::classes::types
