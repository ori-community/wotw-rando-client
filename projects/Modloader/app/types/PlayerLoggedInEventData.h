#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLoggedInEventData {
        namespace {
            inline app::PlayerLoggedInEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLoggedInEventData__Class** type_info = &type_info_ref;
        inline app::PlayerLoggedInEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoggedInEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLoggedInEventData");
        }
        inline app::PlayerLoggedInEventData* create() {
            return il2cpp::create_object<app::PlayerLoggedInEventData>(get_class());
        }
    } // namespace PlayerLoggedInEventData
} // namespace app::classes::types
