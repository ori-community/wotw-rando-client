#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventPayload__Class.h>
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventPayload.h>

namespace app::classes::types {
    namespace MultiplayerServerGameAssetDeletedEventPayload {
        namespace {
            inline app::MultiplayerServerGameAssetDeletedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerGameAssetDeletedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerGameAssetDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerGameAssetDeletedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerGameAssetDeletedEventPayload");
        }
        inline app::MultiplayerServerGameAssetDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerGameAssetDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerGameAssetDeletedEventPayload
} // namespace app::classes::types
