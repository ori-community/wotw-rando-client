#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStatisticDeletedEventData {
        namespace {
            inline app::PlayerStatisticDeletedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStatisticDeletedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStatisticDeletedEventData");
        }
        inline app::PlayerStatisticDeletedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticDeletedEventData>(get_class());
        }
    } // namespace PlayerStatisticDeletedEventData
} // namespace app::classes::types
