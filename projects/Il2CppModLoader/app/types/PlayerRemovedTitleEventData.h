#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerRemovedTitleEventData {
        namespace {
            app::PlayerRemovedTitleEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerRemovedTitleEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRemovedTitleEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRemovedTitleEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRemovedTitleEventData");
        }
        inline app::PlayerRemovedTitleEventData* create() {
            return il2cpp::create_object<app::PlayerRemovedTitleEventData>(get_class());
        }
    } // namespace PlayerRemovedTitleEventData
} // namespace app::classes::types
