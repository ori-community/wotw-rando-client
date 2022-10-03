#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UWPVideoPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UWPVideoPlayer__Class** type_info;
        inline app::UWPVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::UWPVideoPlayer__Class>(type_info, "", "UWPVideoPlayer");
        }
        inline app::UWPVideoPlayer* create() {
            return il2cpp::create_object<app::UWPVideoPlayer>(get_class());
        }
    } // namespace UWPVideoPlayer
} // namespace app::classes::types
