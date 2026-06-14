#pragma once
#include <Modloader/app/structs/StudioCreatedEventData.h>
#include <Modloader/app/structs/StudioCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StudioCreatedEventData {
        inline app::StudioCreatedEventData__Class** type_info() {
            static app::StudioCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StudioCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StudioCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "StudioCreatedEventData");
        }
        inline app::StudioCreatedEventData* create() {
            return il2cpp::create_object<app::StudioCreatedEventData>(get_class());
        }
    } // namespace StudioCreatedEventData
} // namespace app::classes::types
