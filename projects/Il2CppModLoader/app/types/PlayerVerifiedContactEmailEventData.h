#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerVerifiedContactEmailEventData {
        namespace {
            inline app::PlayerVerifiedContactEmailEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerVerifiedContactEmailEventData__Class** type_info = &type_info_ref;
        inline app::PlayerVerifiedContactEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVerifiedContactEmailEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerVerifiedContactEmailEventData");
        }
        inline app::PlayerVerifiedContactEmailEventData* create() {
            return il2cpp::create_object<app::PlayerVerifiedContactEmailEventData>(get_class());
        }
    } // namespace PlayerVerifiedContactEmailEventData
} // namespace app::classes::types
