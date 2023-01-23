#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabProfilesAPI__Class.h>
#include <Modloader/app/structs/PlayFabProfilesAPI.h>

namespace app::classes::types {
    namespace PlayFabProfilesAPI {
        inline app::PlayFabProfilesAPI__Class** type_info = (app::PlayFabProfilesAPI__Class**)(modloader::win::memory::resolve_rva(0x0476A4A0));
        inline app::PlayFabProfilesAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesAPI__Class>(type_info, "PlayFab", "PlayFabProfilesAPI");
        }
        inline app::PlayFabProfilesAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesAPI>(get_class());
        }
    } // namespace PlayFabProfilesAPI
} // namespace app::classes::types
