#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetGlobalPolicyResponse {
        inline app::SetGlobalPolicyResponse__Class** type_info = (app::SetGlobalPolicyResponse__Class**)(modloader::win::memory::resolve_rva(0x04718C48));
        inline app::SetGlobalPolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetGlobalPolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetGlobalPolicyResponse");
        }
        inline app::SetGlobalPolicyResponse* create() {
            return il2cpp::create_object<app::SetGlobalPolicyResponse>(get_class());
        }
    } // namespace SetGlobalPolicyResponse
} // namespace app::classes::types
