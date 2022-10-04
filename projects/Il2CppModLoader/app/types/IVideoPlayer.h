#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVideoPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVideoPlayer__Class** type_info;
        inline app::IVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::IVideoPlayer__Class>(type_info, "", "IVideoPlayer");
        }
    } // namespace IVideoPlayer
} // namespace app::classes::types
