#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAdClosedEventData {
        namespace {
            inline app::PlayerAdClosedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdClosedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdClosedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdClosedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdClosedEventData");
        }
        inline app::PlayerAdClosedEventData* create() {
            return il2cpp::create_object<app::PlayerAdClosedEventData>(get_class());
        }
    } // namespace PlayerAdClosedEventData
} // namespace app::classes::types
