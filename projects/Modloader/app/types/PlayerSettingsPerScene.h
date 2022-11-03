#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerSettingsPerScene {
        inline app::PlayerSettingsPerScene__Class** type_info = (app::PlayerSettingsPerScene__Class**)(modloader::win::memory::resolve_rva(0x0475F4D0));
        inline app::PlayerSettingsPerScene__Class* get_class() {
            return il2cpp::get_class<app::PlayerSettingsPerScene__Class>(type_info, "", "PlayerSettingsPerScene");
        }
        inline app::PlayerSettingsPerScene* create() {
            return il2cpp::create_object<app::PlayerSettingsPerScene>(get_class());
        }
    } // namespace PlayerSettingsPerScene
} // namespace app::classes::types
