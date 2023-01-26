#pragma once
#include <Modloader/app/structs/UWPVideoPlayer.h>
#include <Modloader/app/structs/UWPVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UWPVideoPlayer {
        inline app::UWPVideoPlayer__Class** type_info() {
            static app::UWPVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UWPVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x047067B8));
            }
            return cache;
        }
        inline app::UWPVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::UWPVideoPlayer__Class>(type_info(), "", "UWPVideoPlayer");
        }
        inline app::UWPVideoPlayer* create() {
            return il2cpp::create_object<app::UWPVideoPlayer>(get_class());
        }
    } // namespace UWPVideoPlayer
} // namespace app::classes::types
