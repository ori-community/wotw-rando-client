#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerRequestedEventPayload {
        namespace {
            inline app::MultiplayerServerRequestedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerRequestedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerRequestedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerRequestedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerRequestedEventPayload");
        }
        inline app::MultiplayerServerRequestedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerRequestedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerRequestedEventPayload
} // namespace app::classes::types
