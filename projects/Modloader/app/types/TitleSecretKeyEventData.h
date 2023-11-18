#pragma once
#include <Modloader/app/structs/TitleSecretKeyEventData.h>
#include <Modloader/app/structs/TitleSecretKeyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleSecretKeyEventData {
        inline app::TitleSecretKeyEventData__Class** type_info() {
            static app::TitleSecretKeyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleSecretKeyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleSecretKeyEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleSecretKeyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleSecretKeyEventData");
        }
        inline app::TitleSecretKeyEventData* create() {
            return il2cpp::create_object<app::TitleSecretKeyEventData>(get_class());
        }
    } // namespace TitleSecretKeyEventData
} // namespace app::classes::types
