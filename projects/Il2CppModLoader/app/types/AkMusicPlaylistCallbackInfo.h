#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMusicPlaylistCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMusicPlaylistCallbackInfo__Class** type_info;
        inline app::AkMusicPlaylistCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMusicPlaylistCallbackInfo__Class>(type_info, "", "AkMusicPlaylistCallbackInfo");
        }
        inline app::AkMusicPlaylistCallbackInfo* create() {
            return il2cpp::create_object<app::AkMusicPlaylistCallbackInfo>(get_class());
        }
    } // namespace AkMusicPlaylistCallbackInfo
} // namespace app::classes::types
