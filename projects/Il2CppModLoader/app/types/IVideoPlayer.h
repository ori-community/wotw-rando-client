#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVideoPlayer {
        inline app::IVideoPlayer__Class** type_info = (app::IVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x04717288));
        inline app::IVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::IVideoPlayer__Class>(type_info, "", "IVideoPlayer");
        }
    } // namespace IVideoPlayer
} // namespace app::classes::types
