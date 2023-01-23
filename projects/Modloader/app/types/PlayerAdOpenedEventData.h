#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAdOpenedEventData__Class.h>
#include <Modloader/app/structs/PlayerAdOpenedEventData.h>

namespace app::classes::types {
    namespace PlayerAdOpenedEventData {
        namespace {
            inline app::PlayerAdOpenedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdOpenedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdOpenedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdOpenedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdOpenedEventData");
        }
        inline app::PlayerAdOpenedEventData* create() {
            return il2cpp::create_object<app::PlayerAdOpenedEventData>(get_class());
        }
    } // namespace PlayerAdOpenedEventData
} // namespace app::classes::types
