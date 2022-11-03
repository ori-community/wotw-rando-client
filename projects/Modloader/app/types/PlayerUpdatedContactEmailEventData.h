#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUpdatedContactEmailEventData {
        namespace {
            inline app::PlayerUpdatedContactEmailEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerUpdatedContactEmailEventData__Class** type_info = &type_info_ref;
        inline app::PlayerUpdatedContactEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerUpdatedContactEmailEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerUpdatedContactEmailEventData");
        }
        inline app::PlayerUpdatedContactEmailEventData* create() {
            return il2cpp::create_object<app::PlayerUpdatedContactEmailEventData>(get_class());
        }
    } // namespace PlayerUpdatedContactEmailEventData
} // namespace app::classes::types
