#pragma once
#include <Modloader/app/structs/TierUpdateEventData.h>
#include <Modloader/app/structs/TierUpdateEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TierUpdateEventData {
        inline app::TierUpdateEventData__Class** type_info() {
            static app::TierUpdateEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TierUpdateEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TierUpdateEventData__Class* get_class() {
            return il2cpp::get_class<app::TierUpdateEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TierUpdateEventData");
        }
        inline app::TierUpdateEventData* create() {
            return il2cpp::create_object<app::TierUpdateEventData>(get_class());
        }
    } // namespace TierUpdateEventData
} // namespace app::classes::types
