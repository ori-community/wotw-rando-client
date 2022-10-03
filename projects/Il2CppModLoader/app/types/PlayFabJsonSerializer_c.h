#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabJsonSerializer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabJsonSerializer_c__Class** type_info;
        inline app::PlayFabJsonSerializer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabJsonSerializer_c__Class>(type_info, "SystemIntegration.Synchronizer.Telemetry", "PlayFabJsonSerializer", "<>c");
        }
        inline app::PlayFabJsonSerializer_c* create() {
            return il2cpp::create_object<app::PlayFabJsonSerializer_c>(get_class());
        }
    } // namespace PlayFabJsonSerializer_c
} // namespace app::classes::types
