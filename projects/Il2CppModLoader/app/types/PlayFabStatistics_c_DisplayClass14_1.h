#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c_DisplayClass14_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabStatistics_c_DisplayClass14_1__Class** type_info;
        inline app::PlayFabStatistics_c_DisplayClass14_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c_DisplayClass14_1__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c__DisplayClass14_1");
        }
        inline app::PlayFabStatistics_c_DisplayClass14_1* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c_DisplayClass14_1>(get_class());
        }
    } // namespace PlayFabStatistics_c_DisplayClass14_1
} // namespace app::classes::types
