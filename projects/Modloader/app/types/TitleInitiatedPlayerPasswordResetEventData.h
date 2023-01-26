#pragma once
#include <Modloader/app/structs/TitleInitiatedPlayerPasswordResetEventData.h>
#include <Modloader/app/structs/TitleInitiatedPlayerPasswordResetEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleInitiatedPlayerPasswordResetEventData {
        inline app::TitleInitiatedPlayerPasswordResetEventData__Class** type_info() {
            static app::TitleInitiatedPlayerPasswordResetEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleInitiatedPlayerPasswordResetEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleInitiatedPlayerPasswordResetEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleInitiatedPlayerPasswordResetEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleInitiatedPlayerPasswordResetEventData");
        }
        inline app::TitleInitiatedPlayerPasswordResetEventData* create() {
            return il2cpp::create_object<app::TitleInitiatedPlayerPasswordResetEventData>(get_class());
        }
    } // namespace TitleInitiatedPlayerPasswordResetEventData
} // namespace app::classes::types
