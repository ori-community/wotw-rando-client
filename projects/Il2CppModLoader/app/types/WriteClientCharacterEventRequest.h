#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteClientCharacterEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteClientCharacterEventRequest__Class** type_info;
        inline app::WriteClientCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientCharacterEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteClientCharacterEventRequest");
        }
        inline app::WriteClientCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteClientCharacterEventRequest>(get_class());
        }
    } // namespace WriteClientCharacterEventRequest
} // namespace app::classes::types
