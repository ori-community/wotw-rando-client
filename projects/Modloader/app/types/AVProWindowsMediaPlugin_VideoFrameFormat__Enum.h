#pragma once
#include <Modloader/app/structs/AVProWindowsMediaPlugin_VideoFrameFormat__Enum.h>
#include <Modloader/app/structs/AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaPlugin_VideoFrameFormat__Enum {
        inline app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class** type_info() {
            static app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476F860));
            }
            return cache;
        }
        inline app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum__Class>(type_info(), "", "AVProWindowsMediaPlugin", "VideoFrameFormat");
        }
        inline app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum* create() {
            return il2cpp::create_object<app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum>(get_class());
        }
    } // namespace AVProWindowsMediaPlugin_VideoFrameFormat__Enum
} // namespace app::classes::types
