#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetEntityProfileResponse {
        inline app::GetEntityProfileResponse__Class** type_info = (app::GetEntityProfileResponse__Class**)(modloader::win::memory::resolve_rva(0x0472A5F0));
        inline app::GetEntityProfileResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfileResponse");
        }
        inline app::GetEntityProfileResponse* create() {
            return il2cpp::create_object<app::GetEntityProfileResponse>(get_class());
        }
    } // namespace GetEntityProfileResponse
} // namespace app::classes::types
