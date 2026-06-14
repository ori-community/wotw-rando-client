#pragma once
#include <Modloader/app/structs/TitleDeletedEventData.h>
#include <Modloader/app/structs/TitleDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleDeletedEventData {
        inline app::TitleDeletedEventData__Class** type_info() {
            static app::TitleDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleDeletedEventData");
        }
        inline app::TitleDeletedEventData* create() {
            return il2cpp::create_object<app::TitleDeletedEventData>(get_class());
        }
    } // namespace TitleDeletedEventData
} // namespace app::classes::types
