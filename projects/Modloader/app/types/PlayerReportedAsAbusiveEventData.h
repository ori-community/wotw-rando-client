#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerReportedAsAbusiveEventData {
        namespace {
            inline app::PlayerReportedAsAbusiveEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerReportedAsAbusiveEventData__Class** type_info = &type_info_ref;
        inline app::PlayerReportedAsAbusiveEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerReportedAsAbusiveEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerReportedAsAbusiveEventData");
        }
        inline app::PlayerReportedAsAbusiveEventData* create() {
            return il2cpp::create_object<app::PlayerReportedAsAbusiveEventData>(get_class());
        }
    } // namespace PlayerReportedAsAbusiveEventData
} // namespace app::classes::types
