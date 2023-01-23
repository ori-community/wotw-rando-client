#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SessionEndedEventData__Class.h>
#include <Modloader/app/structs/SessionEndedEventData.h>

namespace app::classes::types {
    namespace SessionEndedEventData {
        namespace {
            inline app::SessionEndedEventData__Class* type_info_ref = nullptr;
        }
        inline app::SessionEndedEventData__Class** type_info = &type_info_ref;
        inline app::SessionEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::SessionEndedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "SessionEndedEventData");
        }
        inline app::SessionEndedEventData* create() {
            return il2cpp::create_object<app::SessionEndedEventData>(get_class());
        }
    } // namespace SessionEndedEventData
} // namespace app::classes::types
