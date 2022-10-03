#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaPlugin_VideoFrameFormat__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class** type_info;
        inline app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class>(type_info, "", "AVProWindowsMediaPlugin", "VideoFrameFormat");
        }
        inline app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum* create() {
            return il2cpp::create_object<app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum>(get_class());
        }
    } // namespace AVProWindowsMediaPlugin_VideoFrameFormat__Enum
} // namespace app::classes::types
