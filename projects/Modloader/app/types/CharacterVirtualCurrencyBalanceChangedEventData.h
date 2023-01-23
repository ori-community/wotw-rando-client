#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData__Class.h>
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData.h>

namespace app::classes::types {
    namespace CharacterVirtualCurrencyBalanceChangedEventData {
        namespace {
            inline app::CharacterVirtualCurrencyBalanceChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterVirtualCurrencyBalanceChangedEventData__Class** type_info = &type_info_ref;
        inline app::CharacterVirtualCurrencyBalanceChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterVirtualCurrencyBalanceChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterVirtualCurrencyBalanceChangedEventData");
        }
        inline app::CharacterVirtualCurrencyBalanceChangedEventData* create() {
            return il2cpp::create_object<app::CharacterVirtualCurrencyBalanceChangedEventData>(get_class());
        }
    } // namespace CharacterVirtualCurrencyBalanceChangedEventData
} // namespace app::classes::types
