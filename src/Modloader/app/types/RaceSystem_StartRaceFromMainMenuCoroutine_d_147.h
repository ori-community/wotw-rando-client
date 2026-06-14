#pragma once
#include <Modloader/app/structs/RaceSystem_StartRaceFromMainMenuCoroutine_d_147.h>
#include <Modloader/app/structs/RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSystem_StartRaceFromMainMenuCoroutine_d_147 {
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class** type_info() {
            static app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class**)(modloader::win::memory::resolve_rva(0x047896B0));
            }
            return cache;
        }
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class>(type_info(), "", "RaceSystem", "<StartRaceFromMainMenuCoroutine>d__147");
        }
        inline app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147* create() {
            return il2cpp::create_object<app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147>(get_class());
        }
    } // namespace RaceSystem_StartRaceFromMainMenuCoroutine_d_147
} // namespace app::classes::types
