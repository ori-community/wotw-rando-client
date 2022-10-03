#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddCharacterVirtualCurrencyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddCharacterVirtualCurrencyRequest__Class** type_info;
        inline app::AddCharacterVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::AddCharacterVirtualCurrencyRequest__Class>(type_info, "PlayFab.ServerModels", "AddCharacterVirtualCurrencyRequest");
        }
        inline app::AddCharacterVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::AddCharacterVirtualCurrencyRequest>(get_class());
        }
    } // namespace AddCharacterVirtualCurrencyRequest
} // namespace app::classes::types
