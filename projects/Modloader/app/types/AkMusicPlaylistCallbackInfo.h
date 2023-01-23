#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo__Class.h>
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo.h>

namespace app::classes::types {
    namespace AkMusicPlaylistCallbackInfo {
        inline app::AkMusicPlaylistCallbackInfo__Class** type_info = (app::AkMusicPlaylistCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04747768));
        inline app::AkMusicPlaylistCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMusicPlaylistCallbackInfo__Class>(type_info, "", "AkMusicPlaylistCallbackInfo");
        }
        inline app::AkMusicPlaylistCallbackInfo* create() {
            return il2cpp::create_object<app::AkMusicPlaylistCallbackInfo>(get_class());
        }
    } // namespace AkMusicPlaylistCallbackInfo
} // namespace app::classes::types
