#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUITimeline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderPlaybackUITimeline__Class** type_info;
        inline app::RecorderPlaybackUITimeline__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUITimeline__Class>(type_info, "", "RecorderPlaybackUITimeline");
        }
        inline app::RecorderPlaybackUITimeline* create() {
            return il2cpp::create_object<app::RecorderPlaybackUITimeline>(get_class());
        }
    } // namespace RecorderPlaybackUITimeline
} // namespace app::classes::types
