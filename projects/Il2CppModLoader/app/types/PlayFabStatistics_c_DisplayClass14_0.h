#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c_DisplayClass14_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabStatistics_c_DisplayClass14_0__Class** type_info;
        inline app::PlayFabStatistics_c_DisplayClass14_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c_DisplayClass14_0__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c__DisplayClass14_0");
        }
        inline app::PlayFabStatistics_c_DisplayClass14_0* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c_DisplayClass14_0>(get_class());
        }
    } // namespace PlayFabStatistics_c_DisplayClass14_0
} // namespace app::classes::types
