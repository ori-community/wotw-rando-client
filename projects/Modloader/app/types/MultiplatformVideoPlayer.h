#pragma once
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>
#include <Modloader/app/structs/MultiplatformVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayer {
        inline app::MultiplatformVideoPlayer__Class** type_info() {
            static app::MultiplatformVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplatformVideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplatformVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayer__Class>(type_info(), "", "MultiplatformVideoPlayer");
        }
        inline app::MultiplatformVideoPlayer* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayer>(get_class());
        }
    } // namespace MultiplatformVideoPlayer
} // namespace app::classes::types
