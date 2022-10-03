#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabLoggerBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabLoggerBase__Class** type_info;
        inline app::PlayFabLoggerBase__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLoggerBase__Class>(type_info, "PlayFab.Public", "PlayFabLoggerBase");
        }
        inline app::PlayFabLoggerBase* create() {
            return il2cpp::create_object<app::PlayFabLoggerBase>(get_class());
        }
    } // namespace PlayFabLoggerBase
} // namespace app::classes::types
