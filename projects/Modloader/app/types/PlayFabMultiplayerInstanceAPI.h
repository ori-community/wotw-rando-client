#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI__Class.h>
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI.h>

namespace app::classes::types {
    namespace PlayFabMultiplayerInstanceAPI {
        namespace {
            inline app::PlayFabMultiplayerInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabMultiplayerInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabMultiplayerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabMultiplayerInstanceAPI__Class>(type_info, "PlayFab", "PlayFabMultiplayerInstanceAPI");
        }
        inline app::PlayFabMultiplayerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabMultiplayerInstanceAPI>(get_class());
        }
    } // namespace PlayFabMultiplayerInstanceAPI
} // namespace app::classes::types
