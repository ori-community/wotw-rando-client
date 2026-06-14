#pragma once
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerRequestedEventPayload {
        inline app::MultiplayerServerRequestedEventPayload__Class** type_info() {
            static app::MultiplayerServerRequestedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerRequestedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerRequestedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerRequestedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerRequestedEventPayload");
        }
        inline app::MultiplayerServerRequestedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerRequestedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerRequestedEventPayload
} // namespace app::classes::types
