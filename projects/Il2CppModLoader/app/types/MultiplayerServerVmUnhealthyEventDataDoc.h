#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnhealthyEventDataDoc {
        namespace {
            app::MultiplayerServerVmUnhealthyEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmUnhealthyEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnhealthyEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmUnhealthyEventDataDoc");
        }
        inline app::MultiplayerServerVmUnhealthyEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnhealthyEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmUnhealthyEventDataDoc
} // namespace app::classes::types
