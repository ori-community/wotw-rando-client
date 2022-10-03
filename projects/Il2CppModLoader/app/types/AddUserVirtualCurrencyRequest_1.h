#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddUserVirtualCurrencyRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddUserVirtualCurrencyRequest_1__Class** type_info;
        inline app::AddUserVirtualCurrencyRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddUserVirtualCurrencyRequest_1__Class>(type_info, "PlayFab.ServerModels", "AddUserVirtualCurrencyRequest");
        }
        inline app::AddUserVirtualCurrencyRequest_1* create() {
            return il2cpp::create_object<app::AddUserVirtualCurrencyRequest_1>(get_class());
        }
    } // namespace AddUserVirtualCurrencyRequest_1
} // namespace app::classes::types
