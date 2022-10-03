#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifyUserVirtualCurrencyResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifyUserVirtualCurrencyResult_1__Class** type_info;
        inline app::ModifyUserVirtualCurrencyResult_1__Class* get_class() {
            return il2cpp::get_class<app::ModifyUserVirtualCurrencyResult_1__Class>(type_info, "PlayFab.ServerModels", "ModifyUserVirtualCurrencyResult");
        }
        inline app::ModifyUserVirtualCurrencyResult_1* create() {
            return il2cpp::create_object<app::ModifyUserVirtualCurrencyResult_1>(get_class());
        }
    } // namespace ModifyUserVirtualCurrencyResult_1
} // namespace app::classes::types
