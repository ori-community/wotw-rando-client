#pragma once
#include <Modloader/app/structs/SessionEndedEventData.h>
#include <Modloader/app/structs/SessionEndedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SessionEndedEventData {
        inline app::SessionEndedEventData__Class** type_info() {
            static app::SessionEndedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SessionEndedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SessionEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::SessionEndedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "SessionEndedEventData");
        }
        inline app::SessionEndedEventData* create() {
            return il2cpp::create_object<app::SessionEndedEventData>(get_class());
        }
    } // namespace SessionEndedEventData
} // namespace app::classes::types
