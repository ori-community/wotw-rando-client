#pragma once
#include <Modloader/app/structs/AkMusicSyncCallbackInfo.h>
#include <Modloader/app/structs/AkMusicSyncCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMusicSyncCallbackInfo {
        inline app::AkMusicSyncCallbackInfo__Class** type_info() {
            static app::AkMusicSyncCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMusicSyncCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04730E68));
            }
            return cache;
        }
        inline app::AkMusicSyncCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSyncCallbackInfo__Class>(type_info(), "", "AkMusicSyncCallbackInfo");
        }
        inline app::AkMusicSyncCallbackInfo* create() {
            return il2cpp::create_object<app::AkMusicSyncCallbackInfo>(get_class());
        }
    } // namespace AkMusicSyncCallbackInfo
} // namespace app::classes::types
