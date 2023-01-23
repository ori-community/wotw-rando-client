#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetEntityTokenRequest__Class.h>
#include <Modloader/app/structs/GetEntityTokenRequest.h>

namespace app::classes::types {
    namespace GetEntityTokenRequest {
        inline app::GetEntityTokenRequest__Class** type_info = (app::GetEntityTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x04716D48));
        inline app::GetEntityTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityTokenRequest__Class>(type_info, "PlayFab.AuthenticationModels", "GetEntityTokenRequest");
        }
        inline app::GetEntityTokenRequest* create() {
            return il2cpp::create_object<app::GetEntityTokenRequest>(get_class());
        }
    } // namespace GetEntityTokenRequest
} // namespace app::classes::types
