#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UWPVideoPlayer__Class.h>
#include <Modloader/app/structs/UWPVideoPlayer.h>

namespace app::classes::types {
    namespace UWPVideoPlayer {
        inline app::UWPVideoPlayer__Class** type_info = (app::UWPVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x047067B8));
        inline app::UWPVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::UWPVideoPlayer__Class>(type_info, "", "UWPVideoPlayer");
        }
        inline app::UWPVideoPlayer* create() {
            return il2cpp::create_object<app::UWPVideoPlayer>(get_class());
        }
    } // namespace UWPVideoPlayer
} // namespace app::classes::types
