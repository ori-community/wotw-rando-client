#pragma once
#include <Modloader/app/structs/SetGlobalPolicyResponse.h>
#include <Modloader/app/structs/SetGlobalPolicyResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGlobalPolicyResponse {
        inline app::SetGlobalPolicyResponse__Class** type_info() {
            static app::SetGlobalPolicyResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetGlobalPolicyResponse__Class**)(modloader::win::memory::resolve_rva(0x04718C48));
            }
            return cache;
        }
        inline app::SetGlobalPolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetGlobalPolicyResponse__Class>(type_info(), "PlayFab.ProfilesModels", "SetGlobalPolicyResponse");
        }
        inline app::SetGlobalPolicyResponse* create() {
            return il2cpp::create_object<app::SetGlobalPolicyResponse>(get_class());
        }
    } // namespace SetGlobalPolicyResponse
} // namespace app::classes::types
