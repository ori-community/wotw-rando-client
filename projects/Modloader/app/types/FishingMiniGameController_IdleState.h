#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishingMiniGameController_IdleState__Class.h>
#include <Modloader/app/structs/FishingMiniGameController_IdleState.h>

namespace app::classes::types {
    namespace FishingMiniGameController_IdleState {
        inline app::FishingMiniGameController_IdleState__Class** type_info = (app::FishingMiniGameController_IdleState__Class**)(modloader::win::memory::resolve_rva(0x0474C980));
        inline app::FishingMiniGameController_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_IdleState__Class>(type_info, "", "FishingMiniGameController", "IdleState");
        }
        inline app::FishingMiniGameController_IdleState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_IdleState>(get_class());
        }
    } // namespace FishingMiniGameController_IdleState
} // namespace app::classes::types
