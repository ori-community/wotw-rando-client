#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleExceededLimitEventData {
        namespace {
            app::TitleExceededLimitEventData__Class* type_info_ref = nullptr;
        }
        app::TitleExceededLimitEventData__Class** type_info = &type_info_ref;
        inline app::TitleExceededLimitEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleExceededLimitEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleExceededLimitEventData");
        }
        inline app::TitleExceededLimitEventData* create() {
            return il2cpp::create_object<app::TitleExceededLimitEventData>(get_class());
        }
    } // namespace TitleExceededLimitEventData
} // namespace app::classes::types
