#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerTagsRequest {
        inline app::GetPlayerTagsRequest__Class** type_info = (app::GetPlayerTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04707438));
        inline app::GetPlayerTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTagsRequest");
        }
        inline app::GetPlayerTagsRequest* create() {
            return il2cpp::create_object<app::GetPlayerTagsRequest>(get_class());
        }
    } // namespace GetPlayerTagsRequest
} // namespace app::classes::types
