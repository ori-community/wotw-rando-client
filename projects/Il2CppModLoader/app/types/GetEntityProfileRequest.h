#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetEntityProfileRequest {
        inline app::GetEntityProfileRequest__Class** type_info = (app::GetEntityProfileRequest__Class**)(modloader::win::memory::resolve_rva(0x04777300));
        inline app::GetEntityProfileRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfileRequest");
        }
        inline app::GetEntityProfileRequest* create() {
            return il2cpp::create_object<app::GetEntityProfileRequest>(get_class());
        }
    } // namespace GetEntityProfileRequest
} // namespace app::classes::types
