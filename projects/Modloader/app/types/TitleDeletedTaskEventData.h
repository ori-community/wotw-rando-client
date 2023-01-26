#pragma once
#include <Modloader/app/structs/TitleDeletedTaskEventData.h>
#include <Modloader/app/structs/TitleDeletedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleDeletedTaskEventData {
        inline app::TitleDeletedTaskEventData__Class** type_info() {
            static app::TitleDeletedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleDeletedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleDeletedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleDeletedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleDeletedTaskEventData");
        }
        inline app::TitleDeletedTaskEventData* create() {
            return il2cpp::create_object<app::TitleDeletedTaskEventData>(get_class());
        }
    } // namespace TitleDeletedTaskEventData
} // namespace app::classes::types
