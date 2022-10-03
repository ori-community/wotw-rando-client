#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUpdatedContactEmailEventData {
        namespace {
            app::PlayerUpdatedContactEmailEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerUpdatedContactEmailEventData__Class** type_info = &type_info_ref;
        inline app::PlayerUpdatedContactEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerUpdatedContactEmailEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerUpdatedContactEmailEventData");
        }
        inline app::PlayerUpdatedContactEmailEventData* create() {
            return il2cpp::create_object<app::PlayerUpdatedContactEmailEventData>(get_class());
        }
    } // namespace PlayerUpdatedContactEmailEventData
} // namespace app::classes::types
