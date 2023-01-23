#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerConsumedItemEventData__Class.h>
#include <Modloader/app/structs/PlayerConsumedItemEventData.h>

namespace app::classes::types {
    namespace PlayerConsumedItemEventData {
        namespace {
            inline app::PlayerConsumedItemEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerConsumedItemEventData__Class** type_info = &type_info_ref;
        inline app::PlayerConsumedItemEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerConsumedItemEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerConsumedItemEventData");
        }
        inline app::PlayerConsumedItemEventData* create() {
            return il2cpp::create_object<app::PlayerConsumedItemEventData>(get_class());
        }
    } // namespace PlayerConsumedItemEventData
} // namespace app::classes::types
