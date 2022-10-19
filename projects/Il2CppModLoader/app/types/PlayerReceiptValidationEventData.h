#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
