#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMusicSyncCallbackInfo {
        inline app::AkMusicSyncCallbackInfo__Class** type_info = (app::AkMusicSyncCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04730E68));
        inline app::AkMusicSyncCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSyncCallbackInfo__Class>(type_info, "", "AkMusicSyncCallbackInfo");
        }
        inline app::AkMusicSyncCallbackInfo* create() {
            return il2cpp::create_object<app::AkMusicSyncCallbackInfo>(get_class());
        }
    } // namespace AkMusicSyncCallbackInfo
} // namespace app::classes::types
