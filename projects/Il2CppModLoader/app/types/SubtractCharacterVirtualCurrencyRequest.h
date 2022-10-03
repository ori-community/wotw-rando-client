#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubtractCharacterVirtualCurrencyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubtractCharacterVirtualCurrencyRequest__Class** type_info;
        inline app::SubtractCharacterVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::SubtractCharacterVirtualCurrencyRequest__Class>(type_info, "PlayFab.ServerModels", "SubtractCharacterVirtualCurrencyRequest");
        }
        inline app::SubtractCharacterVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::SubtractCharacterVirtualCurrencyRequest>(get_class());
        }
    } // namespace SubtractCharacterVirtualCurrencyRequest
} // namespace app::classes::types
