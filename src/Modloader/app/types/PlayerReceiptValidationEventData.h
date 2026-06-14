#pragma once
#include <Modloader/app/structs/PlayerReceiptValidationEventData.h>
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerReceiptValidationEventData {
        inline app::PlayerReceiptValidationEventData__Class** type_info() {
            static app::PlayerReceiptValidationEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerReceiptValidationEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerReceiptValidationEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerReceiptValidationEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerReceiptValidationEventData");
        }
        inline app::PlayerReceiptValidationEventData* create() {
            return il2cpp::create_object<app::PlayerReceiptValidationEventData>(get_class());
        }
    } // namespace PlayerReceiptValidationEventData
} // namespace app::classes::types
