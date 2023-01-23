#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerRequestedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerRequestedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerRequestedEventDataDoc {
        namespace {
            inline app::MultiplayerServerRequestedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerRequestedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerRequestedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerRequestedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerRequestedEventDataDoc");
        }
        inline app::MultiplayerServerRequestedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerRequestedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerRequestedEventDataDoc
} // namespace app::classes::types
