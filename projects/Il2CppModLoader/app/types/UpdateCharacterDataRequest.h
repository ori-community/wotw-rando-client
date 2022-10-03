#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterDataRequest__Class** type_info;
        inline app::UpdateCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterDataRequest");
        }
        inline app::UpdateCharacterDataRequest* create() {
            return il2cpp::create_object<app::UpdateCharacterDataRequest>(get_class());
        }
    } // namespace UpdateCharacterDataRequest
} // namespace app::classes::types
