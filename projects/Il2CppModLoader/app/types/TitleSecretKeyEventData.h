#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleSecretKeyEventData {
        namespace {
            app::TitleSecretKeyEventData__Class* type_info_ref = nullptr;
        }
        app::TitleSecretKeyEventData__Class** type_info = &type_info_ref;
        inline app::TitleSecretKeyEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleSecretKeyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleSecretKeyEventData");
        }
        inline app::TitleSecretKeyEventData* create() {
            return il2cpp::create_object<app::TitleSecretKeyEventData>(get_class());
        }
    } // namespace TitleSecretKeyEventData
} // namespace app::classes::types
