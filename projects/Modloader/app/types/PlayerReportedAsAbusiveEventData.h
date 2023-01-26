#pragma once
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData.h>
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerReportedAsAbusiveEventData {
        inline app::PlayerReportedAsAbusiveEventData__Class** type_info() {
            static app::PlayerReportedAsAbusiveEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerReportedAsAbusiveEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerReportedAsAbusiveEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerReportedAsAbusiveEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerReportedAsAbusiveEventData");
        }
        inline app::PlayerReportedAsAbusiveEventData* create() {
            return il2cpp::create_object<app::PlayerReportedAsAbusiveEventData>(get_class());
        }
    } // namespace PlayerReportedAsAbusiveEventData
} // namespace app::classes::types
