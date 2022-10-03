#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerTagRemovedEventData {
        namespace {
            app::PlayerTagRemovedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerTagRemovedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerTagRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTagRemovedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerTagRemovedEventData");
        }
        inline app::PlayerTagRemovedEventData* create() {
            return il2cpp::create_object<app::PlayerTagRemovedEventData>(get_class());
        }
    } // namespace PlayerTagRemovedEventData
} // namespace app::classes::types
