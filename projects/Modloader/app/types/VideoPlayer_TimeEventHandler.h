#pragma once
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler.h>
#include <Modloader/app/structs/VideoPlayer_TimeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoPlayer_TimeEventHandler {
        inline app::VideoPlayer_TimeEventHandler__Class** type_info() {
            static app::VideoPlayer_TimeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoPlayer_TimeEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoPlayer_TimeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::VideoPlayer_TimeEventHandler__Class>(type_info(), "UnityEngine.Video", "VideoPlayer", "TimeEventHandler");
        }
        inline app::VideoPlayer_TimeEventHandler* create() {
            return il2cpp::create_object<app::VideoPlayer_TimeEventHandler>(get_class());
        }
    } // namespace VideoPlayer_TimeEventHandler
} // namespace app::classes::types
