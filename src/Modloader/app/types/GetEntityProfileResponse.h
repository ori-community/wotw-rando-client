#pragma once
#include <Modloader/app/structs/GetEntityProfileResponse.h>
#include <Modloader/app/structs/GetEntityProfileResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfileResponse {
        inline app::GetEntityProfileResponse__Class** type_info() {
            static app::GetEntityProfileResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetEntityProfileResponse__Class**)(modloader::win::memory::resolve_rva(0x0472A5F0));
            }
            return cache;
        }
        inline app::GetEntityProfileResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileResponse__Class>(type_info(), "PlayFab.ProfilesModels", "GetEntityProfileResponse");
        }
        inline app::GetEntityProfileResponse* create() {
            return il2cpp::create_object<app::GetEntityProfileResponse>(get_class());
        }
    } // namespace GetEntityProfileResponse
} // namespace app::classes::types
