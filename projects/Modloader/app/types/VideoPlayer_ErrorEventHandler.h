#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler__Class.h>
#include <Modloader/app/structs/VideoPlayer_ErrorEventHandler.h>

namespace app::classes::types {
    namespace VideoPlayer_ErrorEventHandler {
        namespace {
            inline app::VideoPlayer_ErrorEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::VideoPlayer_ErrorEventHandler__Class** type_info = &type_info_ref;
        inline app::VideoPlayer_ErrorEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_ErrorEventHandler__Class>(type_info, "UnityEngine.Video", "VideoPlayer", "ErrorEventHandler");
        }
        inline app::VideoPlayer_ErrorEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_ErrorEventHandler>(get_class());
        }
    } // namespace VideoPlayer_ErrorEventHandler
} // namespace app::classes::types
