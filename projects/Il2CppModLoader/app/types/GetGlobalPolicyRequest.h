#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetGlobalPolicyRequest {
        inline app::GetGlobalPolicyRequest__Class** type_info = (app::GetGlobalPolicyRequest__Class**)(modloader::win::memory::resolve_rva(0x04799338));
        inline app::GetGlobalPolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetGlobalPolicyRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetGlobalPolicyRequest");
        }
        inline app::GetGlobalPolicyRequest* create() {
            return il2cpp::create_object<app::GetGlobalPolicyRequest>(get_class());
        }
    } // namespace GetGlobalPolicyRequest
} // namespace app::classes::types
