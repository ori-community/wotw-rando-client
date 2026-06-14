#pragma once
#include <Modloader/app/structs/GetPlayerTagsRequest.h>
#include <Modloader/app/structs/GetPlayerTagsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTagsRequest {
        inline app::GetPlayerTagsRequest__Class** type_info() {
            static app::GetPlayerTagsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04707438));
            }
            return cache;
        }
        inline app::GetPlayerTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerTagsRequest");
        }
        inline app::GetPlayerTagsRequest* create() {
            return il2cpp::create_object<app::GetPlayerTagsRequest>(get_class());
        }
    } // namespace GetPlayerTagsRequest
} // namespace app::classes::types
