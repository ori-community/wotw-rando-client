#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Array__Class.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Array.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeSettings__Array {
        inline app::LoadingBoostController_BoostModeSettings__Array__Class** type_info = (app::LoadingBoostController_BoostModeSettings__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FAB0));
        inline app::LoadingBoostController_BoostModeSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::LoadingBoostController_BoostModeSettings__Array__Class>(type_info, "", "LoadingBoostController+BoostModeSettings[]");
        }
        inline app::LoadingBoostController_BoostModeSettings__Array* create() {
            return il2cpp::create_object<app::LoadingBoostController_BoostModeSettings__Array>(get_class());
        }
    } // namespace LoadingBoostController_BoostModeSettings__Array
} // namespace app::classes::types
