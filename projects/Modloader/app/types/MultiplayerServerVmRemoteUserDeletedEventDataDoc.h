#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserDeletedEventDataDoc {
        namespace {
            inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserDeletedEventDataDoc");
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserDeletedEventDataDoc
} // namespace app::classes::types
