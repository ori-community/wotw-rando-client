#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeItemRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeItemRequest__Class** type_info;
        inline app::ConsumeItemRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemRequest__Class>(type_info, "PlayFab.ClientModels", "ConsumeItemRequest");
        }
        inline app::ConsumeItemRequest* create() {
            return il2cpp::create_object<app::ConsumeItemRequest>(get_class());
        }
    } // namespace ConsumeItemRequest
} // namespace app::classes::types
