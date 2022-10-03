#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleInitiatedPlayerPasswordResetEventData {
        namespace {
            app::TitleInitiatedPlayerPasswordResetEventData__Class* type_info_ref = nullptr;
        }
        app::TitleInitiatedPlayerPasswordResetEventData__Class** type_info = &type_info_ref;
        inline app::TitleInitiatedPlayerPasswordResetEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleInitiatedPlayerPasswordResetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleInitiatedPlayerPasswordResetEventData");
        }
        inline app::TitleInitiatedPlayerPasswordResetEventData* create() {
            return il2cpp::create_object<app::TitleInitiatedPlayerPasswordResetEventData>(get_class());
        }
    } // namespace TitleInitiatedPlayerPasswordResetEventData
} // namespace app::classes::types
