#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_c_DisplayClass10_0 {
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class** type_info = (app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04773460));
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<>c__DisplayClass10_0");
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_c_DisplayClass10_0>(get_class());
        }
    } // namespace PlayFabRaceServiceProvider_c_DisplayClass10_0
} // namespace app::classes::types
