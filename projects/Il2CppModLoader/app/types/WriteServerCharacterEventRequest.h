#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteServerCharacterEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteServerCharacterEventRequest__Class** type_info;
        inline app::WriteServerCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerCharacterEventRequest__Class>(type_info, "PlayFab.ServerModels", "WriteServerCharacterEventRequest");
        }
        inline app::WriteServerCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteServerCharacterEventRequest>(get_class());
        }
    } // namespace WriteServerCharacterEventRequest
} // namespace app::classes::types
