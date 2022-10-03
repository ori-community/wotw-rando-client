#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveGenericIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveGenericIDRequest__Class** type_info;
        inline app::RemoveGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveGenericIDRequest");
        }
        inline app::RemoveGenericIDRequest* create() {
            return il2cpp::create_object<app::RemoveGenericIDRequest>(get_class());
        }
    } // namespace RemoveGenericIDRequest
} // namespace app::classes::types
