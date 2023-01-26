#pragma once
#include <Modloader/app/structs/StudioUserRemovedEventData.h>
#include <Modloader/app/structs/StudioUserRemovedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StudioUserRemovedEventData {
        inline app::StudioUserRemovedEventData__Class** type_info() {
            static app::StudioUserRemovedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StudioUserRemovedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StudioUserRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserRemovedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "StudioUserRemovedEventData");
        }
        inline app::StudioUserRemovedEventData* create() {
            return il2cpp::create_object<app::StudioUserRemovedEventData>(get_class());
        }
    } // namespace StudioUserRemovedEventData
} // namespace app::classes::types
