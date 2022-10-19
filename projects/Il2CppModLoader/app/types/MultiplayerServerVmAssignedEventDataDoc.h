#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerVmAssignedEventDataDoc {
        namespace {
            inline app::MultiplayerServerVmAssignedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmAssignedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmAssignedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmAssignedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmAssignedEventDataDoc");
        }
        inline app::MultiplayerServerVmAssignedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmAssignedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmAssignedEventDataDoc
} // namespace app::classes::types
