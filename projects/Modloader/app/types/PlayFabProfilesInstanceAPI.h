#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabProfilesInstanceAPI {
        namespace {
            inline app::PlayFabProfilesInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabProfilesInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabProfilesInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesInstanceAPI__Class>(type_info, "PlayFab", "PlayFabProfilesInstanceAPI");
        }
        inline app::PlayFabProfilesInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesInstanceAPI>(get_class());
        }
    } // namespace PlayFabProfilesInstanceAPI
} // namespace app::classes::types
