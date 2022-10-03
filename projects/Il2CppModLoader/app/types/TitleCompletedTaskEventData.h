#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleCompletedTaskEventData {
        namespace {
            app::TitleCompletedTaskEventData__Class* type_info_ref = nullptr;
        }
        app::TitleCompletedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleCompletedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCompletedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleCompletedTaskEventData");
        }
        inline app::TitleCompletedTaskEventData* create() {
            return il2cpp::create_object<app::TitleCompletedTaskEventData>(get_class());
        }
    } // namespace TitleCompletedTaskEventData
} // namespace app::classes::types
