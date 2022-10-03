#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnassignmentStartedEventDataDoc {
        namespace {
            app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmUnassignmentStartedEventDataDoc");
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnassignmentStartedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmUnassignmentStartedEventDataDoc
} // namespace app::classes::types
