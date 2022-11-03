#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoPlayer_FrameReadyEventHandler {
        namespace {
            inline app::VideoPlayer_FrameReadyEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::VideoPlayer_FrameReadyEventHandler__Class** type_info = &type_info_ref;
        inline app::VideoPlayer_FrameReadyEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_FrameReadyEventHandler__Class>(type_info, "UnityEngine.Video", "VideoPlayer", "FrameReadyEventHandler");
        }
        inline app::VideoPlayer_FrameReadyEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_FrameReadyEventHandler>(get_class());
        }
    } // namespace VideoPlayer_FrameReadyEventHandler
} // namespace app::classes::types
