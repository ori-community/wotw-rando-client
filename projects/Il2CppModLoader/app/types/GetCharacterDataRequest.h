#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterDataRequest__Class** type_info;
        inline app::GetCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterDataRequest");
        }
        inline app::GetCharacterDataRequest* create() {
            return il2cpp::create_object<app::GetCharacterDataRequest>(get_class());
        }
    } // namespace GetCharacterDataRequest
} // namespace app::classes::types
