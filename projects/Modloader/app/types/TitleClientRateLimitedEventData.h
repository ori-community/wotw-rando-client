#pragma once
#include <Modloader/app/structs/TitleClientRateLimitedEventData.h>
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleClientRateLimitedEventData {
        inline app::TitleClientRateLimitedEventData__Class** type_info() {
            static app::TitleClientRateLimitedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleClientRateLimitedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleClientRateLimitedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleClientRateLimitedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleClientRateLimitedEventData");
        }
        inline app::TitleClientRateLimitedEventData* create() {
            return il2cpp::create_object<app::TitleClientRateLimitedEventData>(get_class());
        }
    } // namespace TitleClientRateLimitedEventData
} // namespace app::classes::types
