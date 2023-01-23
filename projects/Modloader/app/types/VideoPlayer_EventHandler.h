#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoPlayer_EventHandler__Class.h>
#include <Modloader/app/structs/VideoPlayer_EventHandler.h>

namespace app::classes::types {
    namespace VideoPlayer_EventHandler {
        inline app::VideoPlayer_EventHandler__Class** type_info = (app::VideoPlayer_EventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707510));
        inline app::VideoPlayer_EventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_EventHandler__Class>(type_info, "UnityEngine.Video", "VideoPlayer", "EventHandler");
        }
        inline app::VideoPlayer_EventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_EventHandler>(get_class());
        }
    } // namespace VideoPlayer_EventHandler
} // namespace app::classes::types
