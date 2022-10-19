#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleStatisticVersionChangedEventData {
        namespace {
            inline app::TitleStatisticVersionChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleStatisticVersionChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitleStatisticVersionChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStatisticVersionChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleStatisticVersionChangedEventData");
        }
        inline app::TitleStatisticVersionChangedEventData* create() {
            return il2cpp::create_object<app::TitleStatisticVersionChangedEventData>(get_class());
        }
    } // namespace TitleStatisticVersionChangedEventData
} // namespace app::classes::types
