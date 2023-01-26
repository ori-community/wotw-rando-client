#pragma once
#include <Modloader/app/structs/PlayFabLogLevel__Enum.h>
#include <Modloader/app/structs/PlayFabLogLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabLogLevel__Enum {
        inline app::PlayFabLogLevel__Enum__Class** type_info() {
            static app::PlayFabLogLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabLogLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabLogLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLogLevel__Enum__Class>(type_info(), "PlayFab", "PlayFabLogLevel");
        }
        inline app::PlayFabLogLevel__Enum* create() {
            return il2cpp::create_object<app::PlayFabLogLevel__Enum>(get_class());
        }
    } // namespace PlayFabLogLevel__Enum
} // namespace app::classes::types
