#pragma once
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#include <Modloader/app/structs/PlayerSettingsPerScene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerSettingsPerScene {
        inline app::PlayerSettingsPerScene__Class** type_info() {
            static app::PlayerSettingsPerScene__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerSettingsPerScene__Class**)(modloader::win::memory::resolve_rva(0x0475F4D0));
            }
            return cache;
        }
        inline app::PlayerSettingsPerScene__Class* get_class() {
            return il2cpp::get_class<app::PlayerSettingsPerScene__Class>(type_info(), "", "PlayerSettingsPerScene");
        }
        inline app::PlayerSettingsPerScene* create() {
            return il2cpp::create_object<app::PlayerSettingsPerScene>(get_class());
        }
    } // namespace PlayerSettingsPerScene
} // namespace app::classes::types
