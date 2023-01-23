#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc {
        namespace {
            inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventDataDoc");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc
} // namespace app::classes::types
