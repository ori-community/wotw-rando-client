#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBoostController_BoostModeSettings__Class** type_info;
        inline app::LoadingBoostController_BoostModeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBoostController_BoostModeSettings__Class>(type_info, "", "LoadingBoostController", "BoostModeSettings");
        }
        inline app::LoadingBoostController_BoostModeSettings* create() {
            return il2cpp::create_object<app::LoadingBoostController_BoostModeSettings>(get_class());
        }
        inline app::LoadingBoostController_BoostModeSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::LoadingBoostController_BoostModeSettings__Array>(get_class(), size);
        }
    } // namespace LoadingBoostController_BoostModeSettings
} // namespace app::classes::types
