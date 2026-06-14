#pragma once
#include <Modloader/app/structs/MultiplayerServerStateChangedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerStateChangedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerStateChangedEventPayload {
        inline app::MultiplayerServerStateChangedEventPayload__Class** type_info() {
            static app::MultiplayerServerStateChangedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerStateChangedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerStateChangedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerStateChangedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerStateChangedEventPayload");
        }
        inline app::MultiplayerServerStateChangedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerStateChangedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerStateChangedEventPayload
} // namespace app::classes::types
