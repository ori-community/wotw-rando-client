#pragma once
#include <Modloader/app/structs/SessionStartedEventData.h>
#include <Modloader/app/structs/SessionStartedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SessionStartedEventData {
        inline app::SessionStartedEventData__Class** type_info() {
            static app::SessionStartedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SessionStartedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SessionStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::SessionStartedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "SessionStartedEventData");
        }
        inline app::SessionStartedEventData* create() {
            return il2cpp::create_object<app::SessionStartedEventData>(get_class());
        }
    } // namespace SessionStartedEventData
} // namespace app::classes::types
