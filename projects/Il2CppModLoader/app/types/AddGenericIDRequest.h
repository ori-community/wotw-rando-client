#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddGenericIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddGenericIDRequest__Class** type_info;
        inline app::AddGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDRequest__Class>(type_info, "PlayFab.ClientModels", "AddGenericIDRequest");
        }
        inline app::AddGenericIDRequest* create() {
            return il2cpp::create_object<app::AddGenericIDRequest>(get_class());
        }
    } // namespace AddGenericIDRequest
} // namespace app::classes::types
