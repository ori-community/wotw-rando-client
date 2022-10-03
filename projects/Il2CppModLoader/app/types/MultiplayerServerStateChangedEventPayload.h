#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerStateChangedEventPayload {
        namespace {
            app::MultiplayerServerStateChangedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerStateChangedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerStateChangedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerStateChangedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerStateChangedEventPayload");
        }
        inline app::MultiplayerServerStateChangedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerStateChangedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerStateChangedEventPayload
} // namespace app::classes::types
