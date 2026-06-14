#pragma once
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData.h>
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MasterPlayerTitleDeletedEventData {
        inline app::MasterPlayerTitleDeletedEventData__Class** type_info() {
            static app::MasterPlayerTitleDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MasterPlayerTitleDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MasterPlayerTitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::MasterPlayerTitleDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "MasterPlayerTitleDeletedEventData");
        }
        inline app::MasterPlayerTitleDeletedEventData* create() {
            return il2cpp::create_object<app::MasterPlayerTitleDeletedEventData>(get_class());
        }
    } // namespace MasterPlayerTitleDeletedEventData
} // namespace app::classes::types
