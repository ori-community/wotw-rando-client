#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerProfileRequest {
        inline app::GetPlayerProfileRequest__Class** type_info = (app::GetPlayerProfileRequest__Class**)(modloader::win::memory::resolve_rva(0x04734820));
        inline app::GetPlayerProfileRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerProfileRequest");
        }
        inline app::GetPlayerProfileRequest* create() {
            return il2cpp::create_object<app::GetPlayerProfileRequest>(get_class());
        }
    } // namespace GetPlayerProfileRequest
} // namespace app::classes::types
