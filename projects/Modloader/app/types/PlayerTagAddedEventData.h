#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerTagAddedEventData {
        namespace {
            inline app::PlayerTagAddedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerTagAddedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerTagAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTagAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerTagAddedEventData");
        }
        inline app::PlayerTagAddedEventData* create() {
            return il2cpp::create_object<app::PlayerTagAddedEventData>(get_class());
        }
    } // namespace PlayerTagAddedEventData
} // namespace app::classes::types
