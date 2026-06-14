#pragma once
#include <Modloader/app/structs/MultiplayerServerRequestedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerRequestedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerRequestedEventDataDoc {
        inline app::MultiplayerServerRequestedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerRequestedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerRequestedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerRequestedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerRequestedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerRequestedEventDataDoc");
        }
        inline app::MultiplayerServerRequestedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerRequestedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerRequestedEventDataDoc
} // namespace app::classes::types
