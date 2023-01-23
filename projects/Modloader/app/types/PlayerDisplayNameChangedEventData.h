#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData__Class.h>
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData.h>

namespace app::classes::types {
    namespace PlayerDisplayNameChangedEventData {
        namespace {
            inline app::PlayerDisplayNameChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerDisplayNameChangedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDisplayNameChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDisplayNameChangedEventData");
        }
        inline app::PlayerDisplayNameChangedEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameChangedEventData>(get_class());
        }
    } // namespace PlayerDisplayNameChangedEventData
} // namespace app::classes::types
