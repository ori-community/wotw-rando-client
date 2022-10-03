#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTimeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTimeRequest__Class** type_info;
        inline app::GetTimeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTimeRequest__Class>(type_info, "PlayFab.ClientModels", "GetTimeRequest");
        }
        inline app::GetTimeRequest* create() {
            return il2cpp::create_object<app::GetTimeRequest>(get_class());
        }
    } // namespace GetTimeRequest
} // namespace app::classes::types
