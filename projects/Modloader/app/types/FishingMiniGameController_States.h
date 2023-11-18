#pragma once
#include <Modloader/app/structs/FishingMiniGameController_States.h>
#include <Modloader/app/structs/FishingMiniGameController_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_States {
        inline app::FishingMiniGameController_States__Class** type_info() {
            static app::FishingMiniGameController_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishingMiniGameController_States__Class**)(modloader::win::memory::resolve_rva(0x04798B38));
            }
            return cache;
        }
        inline app::FishingMiniGameController_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_States__Class>(type_info(), "", "FishingMiniGameController", "States");
        }
        inline app::FishingMiniGameController_States* create() {
            return il2cpp::create_object<app::FishingMiniGameController_States>(get_class());
        }
    } // namespace FishingMiniGameController_States
} // namespace app::classes::types
