#pragma once
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_c_DisplayClass10_0 {
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class** type_info() {
            static app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04773460));
            }
            return cache;
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_c_DisplayClass10_0__Class>(type_info(), "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<>c__DisplayClass10_0");
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_c_DisplayClass10_0>(get_class());
        }
    } // namespace PlayFabRaceServiceProvider_c_DisplayClass10_0
} // namespace app::classes::types
