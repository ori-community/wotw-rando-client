#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabLogLevel__Enum {
        namespace {
            inline app::PlayFabLogLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabLogLevel__Enum__Class** type_info = &type_info_ref;
        inline app::PlayFabLogLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLogLevel__Enum__Class>(type_info, "PlayFab", "PlayFabLogLevel");
        }
        inline app::PlayFabLogLevel__Enum* create() {
            return il2cpp::create_object<app::PlayFabLogLevel__Enum>(get_class());
        }
    } // namespace PlayFabLogLevel__Enum
} // namespace app::classes::types
