#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModifyUserVirtualCurrencyResult {
        inline app::ModifyUserVirtualCurrencyResult__Class** type_info = (app::ModifyUserVirtualCurrencyResult__Class**)(modloader::win::memory::resolve_rva(0x04770BB8));
        inline app::ModifyUserVirtualCurrencyResult__Class* get_class() {
            return il2cpp::get_class<app::ModifyUserVirtualCurrencyResult__Class>(type_info, "PlayFab.ClientModels", "ModifyUserVirtualCurrencyResult");
        }
        inline app::ModifyUserVirtualCurrencyResult* create() {
            return il2cpp::create_object<app::ModifyUserVirtualCurrencyResult>(get_class());
        }
    } // namespace ModifyUserVirtualCurrencyResult
} // namespace app::classes::types
