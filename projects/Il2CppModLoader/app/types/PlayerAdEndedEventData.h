#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAdEndedEventData {
        namespace {
            inline app::PlayerAdEndedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdEndedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdEndedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdEndedEventData");
        }
        inline app::PlayerAdEndedEventData* create() {
            return il2cpp::create_object<app::PlayerAdEndedEventData>(get_class());
        }
    } // namespace PlayerAdEndedEventData
} // namespace app::classes::types
