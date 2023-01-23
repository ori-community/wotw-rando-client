#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabUser__Class.h>
#include <Modloader/app/structs/PlayFabUser.h>

namespace app::classes::types {
    namespace PlayFabUser {
        inline app::PlayFabUser__Class** type_info = (app::PlayFabUser__Class**)(modloader::win::memory::resolve_rva(0x04727800));
        inline app::PlayFabUser__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUser__Class>(type_info, "usedStandaloneScripts.SystemIntegration.SignIn.User", "PlayFabUser");
        }
        inline app::PlayFabUser* create() {
            return il2cpp::create_object<app::PlayFabUser>(get_class());
        }
    } // namespace PlayFabUser
} // namespace app::classes::types
