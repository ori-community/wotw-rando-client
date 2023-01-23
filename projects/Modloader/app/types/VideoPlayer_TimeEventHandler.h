#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler__Class.h>
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>

namespace app::classes::types {
    namespace VideoPlayer_TimeEventHandler {
        namespace {
            inline app::VideoPlayer_TimeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::VideoPlayer_TimeEventHandler__Class** type_info = &type_info_ref;
        inline app::VideoPlayer_TimeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_TimeEventHandler__Class>(type_info, "UnityEngine.Video", "VideoPlayer", "TimeEventHandler");
        }
        inline app::VideoPlayer_TimeEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_TimeEventHandler>(get_class());
        }
    } // namespace VideoPlayer_TimeEventHandler
} // namespace app::classes::types
