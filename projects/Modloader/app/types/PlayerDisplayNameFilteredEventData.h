#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData__Class.h>
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData.h>

namespace app::classes::types {
    namespace PlayerDisplayNameFilteredEventData {
        namespace {
            inline app::PlayerDisplayNameFilteredEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerDisplayNameFilteredEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDisplayNameFilteredEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameFilteredEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDisplayNameFilteredEventData");
        }
        inline app::PlayerDisplayNameFilteredEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameFilteredEventData>(get_class());
        }
    } // namespace PlayerDisplayNameFilteredEventData
} // namespace app::classes::types
