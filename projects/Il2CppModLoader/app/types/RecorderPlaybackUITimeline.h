#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderPlaybackUITimeline {
        inline app::RecorderPlaybackUITimeline__Class** type_info = (app::RecorderPlaybackUITimeline__Class**)(modloader::win::memory::resolve_rva(0x0470BAA8));
        inline app::RecorderPlaybackUITimeline__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUITimeline__Class>(type_info, "", "RecorderPlaybackUITimeline");
        }
        inline app::RecorderPlaybackUITimeline* create() {
            return il2cpp::create_object<app::RecorderPlaybackUITimeline>(get_class());
        }
    } // namespace RecorderPlaybackUITimeline
} // namespace app::classes::types
