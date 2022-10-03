#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleCreatedTaskEventData {
        namespace {
            app::TitleCreatedTaskEventData__Class* type_info_ref = nullptr;
        }
        app::TitleCreatedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleCreatedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCreatedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleCreatedTaskEventData");
        }
        inline app::TitleCreatedTaskEventData* create() {
            return il2cpp::create_object<app::TitleCreatedTaskEventData>(get_class());
        }
    } // namespace TitleCreatedTaskEventData
} // namespace app::classes::types
