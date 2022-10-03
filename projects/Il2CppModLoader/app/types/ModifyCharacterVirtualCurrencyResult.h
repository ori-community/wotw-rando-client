#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifyCharacterVirtualCurrencyResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifyCharacterVirtualCurrencyResult__Class** type_info;
        inline app::ModifyCharacterVirtualCurrencyResult__Class* get_class() {
            return il2cpp::get_class<app::ModifyCharacterVirtualCurrencyResult__Class>(type_info, "PlayFab.ServerModels", "ModifyCharacterVirtualCurrencyResult");
        }
        inline app::ModifyCharacterVirtualCurrencyResult* create() {
            return il2cpp::create_object<app::ModifyCharacterVirtualCurrencyResult>(get_class());
        }
    } // namespace ModifyCharacterVirtualCurrencyResult
} // namespace app::classes::types
