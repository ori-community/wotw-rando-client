#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerCreatedEventData {
        namespace {
            inline app::PlayerCreatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerCreatedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerCreatedEventData");
        }
        inline app::PlayerCreatedEventData* create() {
            return il2cpp::create_object<app::PlayerCreatedEventData>(get_class());
        }
    } // namespace PlayerCreatedEventData
} // namespace app::classes::types
