#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishingMiniGameController_FishingLoopState {
        inline app::FishingMiniGameController_FishingLoopState__Class** type_info = (app::FishingMiniGameController_FishingLoopState__Class**)(modloader::win::memory::resolve_rva(0x04736750));
        inline app::FishingMiniGameController_FishingLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_FishingLoopState__Class>(type_info, "", "FishingMiniGameController", "FishingLoopState");
        }
        inline app::FishingMiniGameController_FishingLoopState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_FishingLoopState>(get_class());
        }
    } // namespace FishingMiniGameController_FishingLoopState
} // namespace app::classes::types
