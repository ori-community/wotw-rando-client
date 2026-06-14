#pragma once
#include <Modloader/app/structs/TitleNewsUpdatedEventData.h>
#include <Modloader/app/structs/TitleNewsUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleNewsUpdatedEventData {
        inline app::TitleNewsUpdatedEventData__Class** type_info() {
            static app::TitleNewsUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleNewsUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleNewsUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleNewsUpdatedEventData");
        }
        inline app::TitleNewsUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleNewsUpdatedEventData>(get_class());
        }
    } // namespace TitleNewsUpdatedEventData
} // namespace app::classes::types
