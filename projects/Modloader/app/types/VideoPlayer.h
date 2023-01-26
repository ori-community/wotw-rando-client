#pragma once
#include <Modloader/app/structs/VideoPlayer.h>
#include <Modloader/app/structs/VideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoPlayer {
        inline app::VideoPlayer__Class** type_info() {
            static app::VideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::VideoPlayer__Class>(type_info(), "UnityEngine.Video", "VideoPlayer");
        }
        inline app::VideoPlayer* create() {
            return il2cpp::create_object<app::VideoPlayer>(get_class());
        }
    } // namespace VideoPlayer
} // namespace app::classes::types
