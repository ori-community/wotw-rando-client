#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeSettings__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBoostController_BoostModeSettings__Array__Class** type_info;
        inline app::LoadingBoostController_BoostModeSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::LoadingBoostController_BoostModeSettings__Array__Class>(type_info, "", "LoadingBoostController+BoostModeSettings[]");
        }
        inline app::LoadingBoostController_BoostModeSettings__Array* create() {
            return il2cpp::create_object<app::LoadingBoostController_BoostModeSettings__Array>(get_class());
        }
    } // namespace LoadingBoostController_BoostModeSettings__Array
} // namespace app::classes::types
