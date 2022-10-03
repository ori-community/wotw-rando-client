#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubtractUserVirtualCurrencyRequest__Class** type_info;
        inline app::SubtractUserVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest__Class>(type_info, "PlayFab.ClientModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest
} // namespace app::classes::types
