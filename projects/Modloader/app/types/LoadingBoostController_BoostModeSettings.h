#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Class.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Array.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeSettings {
        inline app::LoadingBoostController_BoostModeSettings__Class** type_info = (app::LoadingBoostController_BoostModeSettings__Class**)(modloader::win::memory::resolve_rva(0x047109B8));
        inline app::LoadingBoostController_BoostModeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBoostController_BoostModeSettings__Class>(type_info, "", "LoadingBoostController", "BoostModeSettings");
        }
        inline app::LoadingBoostController_BoostModeSettings* create() {
            return il2cpp::create_object<app::LoadingBoostController_BoostModeSettings>(get_class());
        }
        inline app::LoadingBoostController_BoostModeSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::LoadingBoostController_BoostModeSettings__Array>(get_class(), size);
        }
        inline app::LoadingBoostController_BoostModeSettings__Array* create_array(const std::vector<app::LoadingBoostController_BoostModeSettings*>& items) {
            return il2cpp::array_new<app::LoadingBoostController_BoostModeSettings__Array>(get_class(), items);
        }
    } // namespace LoadingBoostController_BoostModeSettings
} // namespace app::classes::types
