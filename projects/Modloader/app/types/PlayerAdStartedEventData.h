#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAdStartedEventData__Class.h>
#include <Modloader/app/structs/PlayerAdStartedEventData.h>

namespace app::classes::types {
    namespace PlayerAdStartedEventData {
        namespace {
            inline app::PlayerAdStartedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdStartedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdStartedEventData");
        }
        inline app::PlayerAdStartedEventData* create() {
            return il2cpp::create_object<app::PlayerAdStartedEventData>(get_class());
        }
    } // namespace PlayerAdStartedEventData
} // namespace app::classes::types
