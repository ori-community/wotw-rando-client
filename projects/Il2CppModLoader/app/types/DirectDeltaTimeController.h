#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectDeltaTimeController {
        inline app::DirectDeltaTimeController__Class** type_info = (app::DirectDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x04708340));
        inline app::DirectDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::DirectDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DirectDeltaTimeController");
        }
        inline app::DirectDeltaTimeController* create() {
            return il2cpp::create_object<app::DirectDeltaTimeController>(get_class());
        }
    } // namespace DirectDeltaTimeController
} // namespace app::classes::types
