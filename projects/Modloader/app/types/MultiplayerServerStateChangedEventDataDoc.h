#pragma once
#include <Modloader/app/structs/MultiplayerServerStateChangedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerStateChangedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerStateChangedEventDataDoc {
        inline app::MultiplayerServerStateChangedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerStateChangedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerStateChangedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerStateChangedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerStateChangedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerStateChangedEventDataDoc");
        }
        inline app::MultiplayerServerStateChangedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerStateChangedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerStateChangedEventDataDoc
} // namespace app::classes::types
