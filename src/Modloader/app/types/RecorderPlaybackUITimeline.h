#pragma once
#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>
#include <Modloader/app/structs/RecorderPlaybackUITimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUITimeline {
        inline app::RecorderPlaybackUITimeline__Class** type_info() {
            static app::RecorderPlaybackUITimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderPlaybackUITimeline__Class**)(modloader::win::memory::resolve_rva(0x0470BAA8));
            }
            return cache;
        }
        inline app::RecorderPlaybackUITimeline__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUITimeline__Class>(type_info(), "", "RecorderPlaybackUITimeline");
        }
        inline app::RecorderPlaybackUITimeline* create() {
            return il2cpp::create_object<app::RecorderPlaybackUITimeline>(get_class());
        }
    } // namespace RecorderPlaybackUITimeline
} // namespace app::classes::types
