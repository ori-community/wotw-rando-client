#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabJsonSerializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabJsonSerializer__Class** type_info;
        inline app::PlayFabJsonSerializer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabJsonSerializer__Class>(type_info, "SystemIntegration.Synchronizer.Telemetry", "PlayFabJsonSerializer");
        }
        inline app::PlayFabJsonSerializer* create() {
            return il2cpp::create_object<app::PlayFabJsonSerializer>(get_class());
        }
    } // namespace PlayFabJsonSerializer
} // namespace app::classes::types
