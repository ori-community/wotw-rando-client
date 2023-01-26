#pragma once
#include <Modloader/app/structs/IVideoPlayer.h>
#include <Modloader/app/structs/IVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVideoPlayer {
        inline app::IVideoPlayer__Class** type_info() {
            static app::IVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x04717288));
            }
            return cache;
        }
        inline app::IVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::IVideoPlayer__Class>(type_info(), "", "IVideoPlayer");
        }
    } // namespace IVideoPlayer
} // namespace app::classes::types
