#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoAudioOutputMode__Enum__Class.h>
#include <Modloader/app/structs/VideoAudioOutputMode__Enum.h>

namespace app::classes::types {
    namespace VideoAudioOutputMode__Enum {
        namespace {
            inline app::VideoAudioOutputMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VideoAudioOutputMode__Enum__Class** type_info = &type_info_ref;
        inline app::VideoAudioOutputMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoAudioOutputMode__Enum__Class>(type_info, "UnityEngine.Video", "VideoAudioOutputMode");
        }
        inline app::VideoAudioOutputMode__Enum* create() {
            return il2cpp::create_object<app::VideoAudioOutputMode__Enum>(get_class());
        }
    } // namespace VideoAudioOutputMode__Enum
} // namespace app::classes::types
