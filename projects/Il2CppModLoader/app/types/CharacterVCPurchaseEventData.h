#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterVCPurchaseEventData {
        namespace {
            app::CharacterVCPurchaseEventData__Class* type_info_ref = nullptr;
        }
        app::CharacterVCPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::CharacterVCPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterVCPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterVCPurchaseEventData");
        }
        inline app::CharacterVCPurchaseEventData* create() {
            return il2cpp::create_object<app::CharacterVCPurchaseEventData>(get_class());
        }
    } // namespace CharacterVCPurchaseEventData
} // namespace app::classes::types
