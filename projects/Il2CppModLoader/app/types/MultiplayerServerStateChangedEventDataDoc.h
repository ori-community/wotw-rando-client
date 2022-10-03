#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerStateChangedEventDataDoc {
        namespace {
            app::MultiplayerServerStateChangedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerStateChangedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerStateChangedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerStateChangedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerStateChangedEventDataDoc");
        }
        inline app::MultiplayerServerStateChangedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerStateChangedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerStateChangedEventDataDoc
} // namespace app::classes::types
