#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleRequestedLimitChangeEventData {
        namespace {
            app::TitleRequestedLimitChangeEventData__Class* type_info_ref = nullptr;
        }
        app::TitleRequestedLimitChangeEventData__Class** type_info = &type_info_ref;
        inline app::TitleRequestedLimitChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleRequestedLimitChangeEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleRequestedLimitChangeEventData");
        }
        inline app::TitleRequestedLimitChangeEventData* create() {
            return il2cpp::create_object<app::TitleRequestedLimitChangeEventData>(get_class());
        }
    } // namespace TitleRequestedLimitChangeEventData
} // namespace app::classes::types
