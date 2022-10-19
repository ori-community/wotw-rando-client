#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerActionExecutedEventData {
        namespace {
            inline app::PlayerActionExecutedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerActionExecutedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerActionExecutedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerActionExecutedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerActionExecutedEventData");
        }
        inline app::PlayerActionExecutedEventData* create() {
            return il2cpp::create_object<app::PlayerActionExecutedEventData>(get_class());
        }
    } // namespace PlayerActionExecutedEventData
} // namespace app::classes::types
