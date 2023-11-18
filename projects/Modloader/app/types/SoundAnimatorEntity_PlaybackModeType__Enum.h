#pragma once
#include <Modloader/app/structs/SoundAnimatorEntity_PlaybackModeType__Enum.h>
#include <Modloader/app/structs/SoundAnimatorEntity_PlaybackModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAnimatorEntity_PlaybackModeType__Enum {
        inline app::SoundAnimatorEntity_PlaybackModeType__Enum__Class** type_info() {
            static app::SoundAnimatorEntity_PlaybackModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundAnimatorEntity_PlaybackModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundAnimatorEntity_PlaybackModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAnimatorEntity_PlaybackModeType__Enum__Class>(type_info(), "Moon.Timeline", "SoundAnimatorEntity", "PlaybackModeType");
        }
        inline app::SoundAnimatorEntity_PlaybackModeType__Enum* create() {
            return il2cpp::create_object<app::SoundAnimatorEntity_PlaybackModeType__Enum>(get_class());
        }
    } // namespace SoundAnimatorEntity_PlaybackModeType__Enum
} // namespace app::classes::types
