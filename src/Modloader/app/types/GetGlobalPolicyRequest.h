#pragma once
#include <Modloader/app/structs/GetGlobalPolicyRequest.h>
#include <Modloader/app/structs/GetGlobalPolicyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetGlobalPolicyRequest {
        inline app::GetGlobalPolicyRequest__Class** type_info() {
            static app::GetGlobalPolicyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetGlobalPolicyRequest__Class**)(modloader::win::memory::resolve_rva(0x04799338));
            }
            return cache;
        }
        inline app::GetGlobalPolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetGlobalPolicyRequest__Class>(type_info(), "PlayFab.ProfilesModels", "GetGlobalPolicyRequest");
        }
        inline app::GetGlobalPolicyRequest* create() {
            return il2cpp::create_object<app::GetGlobalPolicyRequest>(get_class());
        }
    } // namespace GetGlobalPolicyRequest
} // namespace app::classes::types
