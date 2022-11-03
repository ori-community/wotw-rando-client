#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetGlobalPolicyResponse {
        inline app::GetGlobalPolicyResponse__Class** type_info = (app::GetGlobalPolicyResponse__Class**)(modloader::win::memory::resolve_rva(0x04765420));
        inline app::GetGlobalPolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::GetGlobalPolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetGlobalPolicyResponse");
        }
        inline app::GetGlobalPolicyResponse* create() {
            return il2cpp::create_object<app::GetGlobalPolicyResponse>(get_class());
        }
    } // namespace GetGlobalPolicyResponse
} // namespace app::classes::types
