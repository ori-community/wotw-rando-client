#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleHighErrorRateEventData {
        namespace {
            app::TitleHighErrorRateEventData__Class* type_info_ref = nullptr;
        }
        app::TitleHighErrorRateEventData__Class** type_info = &type_info_ref;
        inline app::TitleHighErrorRateEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleHighErrorRateEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleHighErrorRateEventData");
        }
        inline app::TitleHighErrorRateEventData* create() {
            return il2cpp::create_object<app::TitleHighErrorRateEventData>(get_class());
        }
    } // namespace TitleHighErrorRateEventData
} // namespace app::classes::types
