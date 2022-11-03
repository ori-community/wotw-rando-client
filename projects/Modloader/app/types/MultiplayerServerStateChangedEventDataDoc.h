#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerStateChangedEventDataDoc {
        namespace {
            inline app::MultiplayerServerStateChangedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerStateChangedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerStateChangedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerStateChangedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerStateChangedEventDataDoc");
        }
        inline app::MultiplayerServerStateChangedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerStateChangedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerStateChangedEventDataDoc
} // namespace app::classes::types
