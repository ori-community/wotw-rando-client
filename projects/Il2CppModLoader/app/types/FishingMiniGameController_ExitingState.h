#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishingMiniGameController_ExitingState {
        inline app::FishingMiniGameController_ExitingState__Class** type_info = (app::FishingMiniGameController_ExitingState__Class**)(modloader::win::memory::resolve_rva(0x04781B80));
        inline app::FishingMiniGameController_ExitingState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_ExitingState__Class>(type_info, "", "FishingMiniGameController", "ExitingState");
        }
        inline app::FishingMiniGameController_ExitingState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_ExitingState>(get_class());
        }
    } // namespace FishingMiniGameController_ExitingState
} // namespace app::classes::types
