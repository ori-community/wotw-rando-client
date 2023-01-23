#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundAnimator_PlaybackModeType__Enum__Class.h>
#include <Modloader/app/structs/SoundAnimator_PlaybackModeType__Enum.h>

namespace app::classes::types {
    namespace SoundAnimator_PlaybackModeType__Enum {
        namespace {
            inline app::SoundAnimator_PlaybackModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SoundAnimator_PlaybackModeType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundAnimator_PlaybackModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAnimator_PlaybackModeType__Enum__Class>(type_info, "", "SoundAnimator", "PlaybackModeType");
        }
        inline app::SoundAnimator_PlaybackModeType__Enum* create() {
            return il2cpp::create_object<app::SoundAnimator_PlaybackModeType__Enum>(get_class());
        }
    } // namespace SoundAnimator_PlaybackModeType__Enum
} // namespace app::classes::types
