#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleClientRateLimitedEventData {
        namespace {
            app::TitleClientRateLimitedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleClientRateLimitedEventData__Class** type_info = &type_info_ref;
        inline app::TitleClientRateLimitedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleClientRateLimitedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleClientRateLimitedEventData");
        }
        inline app::TitleClientRateLimitedEventData* create() {
            return il2cpp::create_object<app::TitleClientRateLimitedEventData>(get_class());
        }
    } // namespace TitleClientRateLimitedEventData
} // namespace app::classes::types
