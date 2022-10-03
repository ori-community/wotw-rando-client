#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubtractUserVirtualCurrencyRequest_1__Class** type_info;
        inline app::SubtractUserVirtualCurrencyRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest_1__Class>(type_info, "PlayFab.ServerModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest_1* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest_1>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest_1
} // namespace app::classes::types
