#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult__Class.h>
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult.h>

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
