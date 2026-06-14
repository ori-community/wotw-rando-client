#pragma once
#include <Modloader/app/structs/GetEntityProfileRequest.h>
#include <Modloader/app/structs/GetEntityProfileRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfileRequest {
        inline app::GetEntityProfileRequest__Class** type_info() {
            static app::GetEntityProfileRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetEntityProfileRequest__Class**)(modloader::win::memory::resolve_rva(0x04777300));
            }
            return cache;
        }
        inline app::GetEntityProfileRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileRequest__Class>(type_info(), "PlayFab.ProfilesModels", "GetEntityProfileRequest");
        }
        inline app::GetEntityProfileRequest* create() {
            return il2cpp::create_object<app::GetEntityProfileRequest>(get_class());
        }
    } // namespace GetEntityProfileRequest
} // namespace app::classes::types
