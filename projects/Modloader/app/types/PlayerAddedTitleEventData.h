#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAddedTitleEventData__Class.h>
#include <Modloader/app/structs/PlayerAddedTitleEventData.h>

namespace app::classes::types {
    namespace PlayerAddedTitleEventData {
        namespace {
            inline app::PlayerAddedTitleEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAddedTitleEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAddedTitleEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAddedTitleEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAddedTitleEventData");
        }
        inline app::PlayerAddedTitleEventData* create() {
            return il2cpp::create_object<app::PlayerAddedTitleEventData>(get_class());
        }
    } // namespace PlayerAddedTitleEventData
} // namespace app::classes::types
