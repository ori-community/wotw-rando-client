#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabLoggerBase_RegisterLogger_d_23 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabLoggerBase_RegisterLogger_d_23__Class** type_info;
        inline app::PlayFabLoggerBase_RegisterLogger_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabLoggerBase_RegisterLogger_d_23__Class>(type_info, "PlayFab.Public", "PlayFabLoggerBase", "<RegisterLogger>d__23");
        }
        inline app::PlayFabLoggerBase_RegisterLogger_d_23* create() {
            return il2cpp::create_object<app::PlayFabLoggerBase_RegisterLogger_d_23>(get_class());
        }
    } // namespace PlayFabLoggerBase_RegisterLogger_d_23
} // namespace app::classes::types
