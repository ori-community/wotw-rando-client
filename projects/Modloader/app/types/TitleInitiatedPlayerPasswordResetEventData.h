#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleInitiatedPlayerPasswordResetEventData__Class.h>
#include <Modloader/app/structs/TitleInitiatedPlayerPasswordResetEventData.h>

namespace app::classes::types {
    namespace TitleInitiatedPlayerPasswordResetEventData {
        namespace {
            inline app::TitleInitiatedPlayerPasswordResetEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleInitiatedPlayerPasswordResetEventData__Class** type_info = &type_info_ref;
        inline app::TitleInitiatedPlayerPasswordResetEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleInitiatedPlayerPasswordResetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleInitiatedPlayerPasswordResetEventData");
        }
        inline app::TitleInitiatedPlayerPasswordResetEventData* create() {
            return il2cpp::create_object<app::TitleInitiatedPlayerPasswordResetEventData>(get_class());
        }
    } // namespace TitleInitiatedPlayerPasswordResetEventData
} // namespace app::classes::types
