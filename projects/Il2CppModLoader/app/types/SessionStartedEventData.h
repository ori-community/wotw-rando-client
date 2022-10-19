#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SessionStartedEventData {
        namespace {
            inline app::SessionStartedEventData__Class* type_info_ref = nullptr;
        }
        inline app::SessionStartedEventData__Class** type_info = &type_info_ref;
        inline app::SessionStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::SessionStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "SessionStartedEventData");
        }
        inline app::SessionStartedEventData* create() {
            return il2cpp::create_object<app::SessionStartedEventData>(get_class());
        }
    } // namespace SessionStartedEventData
} // namespace app::classes::types
