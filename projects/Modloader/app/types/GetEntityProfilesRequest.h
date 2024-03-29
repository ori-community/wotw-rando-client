#pragma once
#include <Modloader/app/structs/GetEntityProfilesRequest.h>
#include <Modloader/app/structs/GetEntityProfilesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfilesRequest {
        inline app::GetEntityProfilesRequest__Class** type_info() {
            static app::GetEntityProfilesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetEntityProfilesRequest__Class**)(modloader::win::memory::resolve_rva(0x04794988));
            }
            return cache;
        }
        inline app::GetEntityProfilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfilesRequest__Class>(type_info(), "PlayFab.ProfilesModels", "GetEntityProfilesRequest");
        }
        inline app::GetEntityProfilesRequest* create() {
            return il2cpp::create_object<app::GetEntityProfilesRequest>(get_class());
        }
    } // namespace GetEntityProfilesRequest
} // namespace app::classes::types
