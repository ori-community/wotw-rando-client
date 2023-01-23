#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishingMiniGameController_States__Class.h>
#include <Modloader/app/structs/FishingMiniGameController_States.h>

namespace app::classes::types {
    namespace FishingMiniGameController_States {
        inline app::FishingMiniGameController_States__Class** type_info = (app::FishingMiniGameController_States__Class**)(modloader::win::memory::resolve_rva(0x04798B38));
        inline app::FishingMiniGameController_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_States__Class>(type_info, "", "FishingMiniGameController", "States");
        }
        inline app::FishingMiniGameController_States* create() {
            return il2cpp::create_object<app::FishingMiniGameController_States>(get_class());
        }
    } // namespace FishingMiniGameController_States
} // namespace app::classes::types
