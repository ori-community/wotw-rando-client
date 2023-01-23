#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI__Class.h>
#include <Modloader/app/structs/PlayFabGroupsInstanceAPI.h>

namespace app::classes::types {
    namespace PlayFabGroupsInstanceAPI {
        namespace {
            inline app::PlayFabGroupsInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabGroupsInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabGroupsInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabGroupsInstanceAPI__Class>(type_info, "PlayFab", "PlayFabGroupsInstanceAPI");
        }
        inline app::PlayFabGroupsInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabGroupsInstanceAPI>(get_class());
        }
    } // namespace PlayFabGroupsInstanceAPI
} // namespace app::classes::types
