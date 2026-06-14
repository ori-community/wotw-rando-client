#pragma once
#include <Modloader/app/structs/CharacterVCPurchaseEventData.h>
#include <Modloader/app/structs/CharacterVCPurchaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterVCPurchaseEventData {
        inline app::CharacterVCPurchaseEventData__Class** type_info() {
            static app::CharacterVCPurchaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterVCPurchaseEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterVCPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterVCPurchaseEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterVCPurchaseEventData");
        }
        inline app::CharacterVCPurchaseEventData* create() {
            return il2cpp::create_object<app::CharacterVCPurchaseEventData>(get_class());
        }
    } // namespace CharacterVCPurchaseEventData
} // namespace app::classes::types
