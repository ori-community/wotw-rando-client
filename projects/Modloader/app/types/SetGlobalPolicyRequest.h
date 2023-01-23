#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGlobalPolicyRequest__Class.h>
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>

namespace app::classes::types {
    namespace SetGlobalPolicyRequest {
        inline app::SetGlobalPolicyRequest__Class** type_info = (app::SetGlobalPolicyRequest__Class**)(modloader::win::memory::resolve_rva(0x0476C4B0));
        inline app::SetGlobalPolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGlobalPolicyRequest__Class>(type_info, "PlayFab.ProfilesModels", "SetGlobalPolicyRequest");
        }
        inline app::SetGlobalPolicyRequest* create() {
            return il2cpp::create_object<app::SetGlobalPolicyRequest>(get_class());
        }
    } // namespace SetGlobalPolicyRequest
} // namespace app::classes::types
