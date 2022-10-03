#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleLimitChangedEventData {
        namespace {
            app::TitleLimitChangedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleLimitChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitleLimitChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleLimitChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleLimitChangedEventData");
        }
        inline app::TitleLimitChangedEventData* create() {
            return il2cpp::create_object<app::TitleLimitChangedEventData>(get_class());
        }
    } // namespace TitleLimitChangedEventData
} // namespace app::classes::types
