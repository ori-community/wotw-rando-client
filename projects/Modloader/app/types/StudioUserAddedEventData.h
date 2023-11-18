#pragma once
#include <Modloader/app/structs/StudioUserAddedEventData.h>
#include <Modloader/app/structs/StudioUserAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StudioUserAddedEventData {
        inline app::StudioUserAddedEventData__Class** type_info() {
            static app::StudioUserAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StudioUserAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StudioUserAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "StudioUserAddedEventData");
        }
        inline app::StudioUserAddedEventData* create() {
            return il2cpp::create_object<app::StudioUserAddedEventData>(get_class());
        }
    } // namespace StudioUserAddedEventData
} // namespace app::classes::types
