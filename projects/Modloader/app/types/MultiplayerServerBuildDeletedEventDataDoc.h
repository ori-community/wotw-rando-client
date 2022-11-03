#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildDeletedEventDataDoc {
        namespace {
            inline app::MultiplayerServerBuildDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerBuildDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildDeletedEventDataDoc");
        }
        inline app::MultiplayerServerBuildDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildDeletedEventDataDoc
} // namespace app::classes::types
