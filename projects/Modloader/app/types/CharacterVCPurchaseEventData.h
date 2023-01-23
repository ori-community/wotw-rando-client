#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterVCPurchaseEventData__Class.h>
#include <Modloader/app/structs/CharacterVCPurchaseEventData.h>

namespace app::classes::types {
    namespace CharacterVCPurchaseEventData {
        namespace {
            inline app::CharacterVCPurchaseEventData__Class* type_info_ref = nullptr;
        }
        inline app::CharacterVCPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::CharacterVCPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterVCPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "CharacterVCPurchaseEventData");
        }
        inline app::CharacterVCPurchaseEventData* create() {
            return il2cpp::create_object<app::CharacterVCPurchaseEventData>(get_class());
        }
    } // namespace CharacterVCPurchaseEventData
} // namespace app::classes::types
