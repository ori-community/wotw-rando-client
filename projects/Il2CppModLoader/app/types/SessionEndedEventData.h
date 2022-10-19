#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
