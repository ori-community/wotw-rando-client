#pragma once
#include <Modloader/app/structs/PlayerPrefStorageEventHandler.h>
#include <Modloader/app/structs/PlayerPrefStorageEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPrefStorageEventHandler {
        inline app::PlayerPrefStorageEventHandler__Class** type_info() {
            static app::PlayerPrefStorageEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerPrefStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476F060));
            }
            return cache;
        }
        inline app::PlayerPrefStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefStorageEventHandler__Class>(type_info(), "frameworks.xboxLive", "PlayerPrefStorageEventHandler");
        }
        inline app::PlayerPrefStorageEventHandler* create() {
            return il2cpp::create_object<app::PlayerPrefStorageEventHandler>(get_class());
        }
    } // namespace PlayerPrefStorageEventHandler
} // namespace app::classes::types
