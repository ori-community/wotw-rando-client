#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Class.h>
#include <Modloader/app/structs/PlayerReceiptValidationEventData.h>

namespace app::classes::types {
    namespace PlayerReceiptValidationEventData {
        namespace {
            inline app::PlayerReceiptValidationEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerReceiptValidationEventData__Class** type_info = &type_info_ref;
        inline app::PlayerReceiptValidationEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerReceiptValidationEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerReceiptValidationEventData");
        }
        inline app::PlayerReceiptValidationEventData* create() {
            return il2cpp::create_object<app::PlayerReceiptValidationEventData>(get_class());
        }
    } // namespace PlayerReceiptValidationEventData
} // namespace app::classes::types
