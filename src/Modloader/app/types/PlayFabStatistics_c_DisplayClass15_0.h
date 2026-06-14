#pragma once
#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass15_0.h>
#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass15_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c_DisplayClass15_0 {
        inline app::PlayFabStatistics_c_DisplayClass15_0__Class** type_info() {
            static app::PlayFabStatistics_c_DisplayClass15_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabStatistics_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x047133B8));
            }
            return cache;
        }
        inline app::PlayFabStatistics_c_DisplayClass15_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c_DisplayClass15_0__Class>(type_info(), "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c__DisplayClass15_0");
        }
        inline app::PlayFabStatistics_c_DisplayClass15_0* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c_DisplayClass15_0>(get_class());
        }
    } // namespace PlayFabStatistics_c_DisplayClass15_0
} // namespace app::classes::types
