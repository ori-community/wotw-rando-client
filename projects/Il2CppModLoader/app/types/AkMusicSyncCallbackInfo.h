#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMusicSyncCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMusicSyncCallbackInfo__Class** type_info;
        inline app::AkMusicSyncCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSyncCallbackInfo__Class>(type_info, "", "AkMusicSyncCallbackInfo");
        }
        inline app::AkMusicSyncCallbackInfo* create() {
            return il2cpp::create_object<app::AkMusicSyncCallbackInfo>(get_class());
        }
    } // namespace AkMusicSyncCallbackInfo
} // namespace app::classes::types
