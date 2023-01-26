#pragma once
#include <Modloader/app/structs/ModifyCharacterVirtualCurrencyResult.h>
#include <Modloader/app/structs/ModifyCharacterVirtualCurrencyResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifyCharacterVirtualCurrencyResult {
        inline app::ModifyCharacterVirtualCurrencyResult__Class** type_info() {
            static app::ModifyCharacterVirtualCurrencyResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModifyCharacterVirtualCurrencyResult__Class**)(modloader::win::memory::resolve_rva(0x0472E658));
            }
            return cache;
        }
        inline app::ModifyCharacterVirtualCurrencyResult__Class* get_class() {
            return il2cpp::get_class<app::ModifyCharacterVirtualCurrencyResult__Class>(type_info(), "PlayFab.ServerModels", "ModifyCharacterVirtualCurrencyResult");
        }
        inline app::ModifyCharacterVirtualCurrencyResult* create() {
            return il2cpp::create_object<app::ModifyCharacterVirtualCurrencyResult>(get_class());
        }
    } // namespace ModifyCharacterVirtualCurrencyResult
} // namespace app::classes::types
