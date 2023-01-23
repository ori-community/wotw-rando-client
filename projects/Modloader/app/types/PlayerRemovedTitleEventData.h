#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerRemovedTitleEventData__Class.h>
#include <Modloader/app/structs/PlayerRemovedTitleEventData.h>

namespace app::classes::types {
    namespace PlayerRemovedTitleEventData {
        namespace {
            inline app::PlayerRemovedTitleEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerRemovedTitleEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRemovedTitleEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRemovedTitleEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRemovedTitleEventData");
        }
        inline app::PlayerRemovedTitleEventData* create() {
            return il2cpp::create_object<app::PlayerRemovedTitleEventData>(get_class());
        }
    } // namespace PlayerRemovedTitleEventData
} // namespace app::classes::types
