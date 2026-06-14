#pragma once
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData.h>
#include <Modloader/app/structs/TitleQueueConfigUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleQueueConfigUpdatedEventData {
        inline app::TitleQueueConfigUpdatedEventData__Class** type_info() {
            static app::TitleQueueConfigUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleQueueConfigUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleQueueConfigUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleQueueConfigUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleQueueConfigUpdatedEventData");
        }
        inline app::TitleQueueConfigUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleQueueConfigUpdatedEventData>(get_class());
        }
    } // namespace TitleQueueConfigUpdatedEventData
} // namespace app::classes::types
