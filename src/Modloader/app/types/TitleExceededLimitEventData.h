#pragma once
#include <Modloader/app/structs/TitleExceededLimitEventData.h>
#include <Modloader/app/structs/TitleExceededLimitEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleExceededLimitEventData {
        inline app::TitleExceededLimitEventData__Class** type_info() {
            static app::TitleExceededLimitEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleExceededLimitEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleExceededLimitEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleExceededLimitEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleExceededLimitEventData");
        }
        inline app::TitleExceededLimitEventData* create() {
            return il2cpp::create_object<app::TitleExceededLimitEventData>(get_class());
        }
    } // namespace TitleExceededLimitEventData
} // namespace app::classes::types
