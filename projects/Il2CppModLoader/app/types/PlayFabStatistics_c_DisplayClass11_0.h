#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c_DisplayClass11_0 {
        inline app::PlayFabStatistics_c_DisplayClass11_0__Class** type_info = (app::PlayFabStatistics_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04726950));
        inline app::PlayFabStatistics_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c_DisplayClass11_0__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c__DisplayClass11_0");
        }
        inline app::PlayFabStatistics_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c_DisplayClass11_0>(get_class());
        }
    } // namespace PlayFabStatistics_c_DisplayClass11_0
} // namespace app::classes::types
