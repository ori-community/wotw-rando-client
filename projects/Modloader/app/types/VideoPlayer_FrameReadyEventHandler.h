#pragma once
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler.h>
#include <Modloader/app/structs/VideoPlayer_FrameReadyEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoPlayer_FrameReadyEventHandler {
        inline app::VideoPlayer_FrameReadyEventHandler__Class** type_info() {
            static app::VideoPlayer_FrameReadyEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoPlayer_FrameReadyEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoPlayer_FrameReadyEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_FrameReadyEventHandler__Class>(type_info(), "UnityEngine.Video", "VideoPlayer", "FrameReadyEventHandler");
        }
        inline app::VideoPlayer_FrameReadyEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_FrameReadyEventHandler>(get_class());
        }
    } // namespace VideoPlayer_FrameReadyEventHandler
} // namespace app::classes::types
