#pragma once
#include <Modloader/app/structs/PlayerPositionOverride.h>
#include <Modloader/app/structs/PlayerPositionOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPositionOverride {
        inline app::PlayerPositionOverride__Class** type_info() {
            static app::PlayerPositionOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerPositionOverride__Class**)(modloader::win::memory::resolve_rva(0x0471EDD8));
            }
            return cache;
        }
        inline app::PlayerPositionOverride__Class* get_class() {
            return il2cpp::get_class<app::PlayerPositionOverride__Class>(type_info(), "", "PlayerPositionOverride");
        }
        inline app::PlayerPositionOverride* create() {
            return il2cpp::create_object<app::PlayerPositionOverride>(get_class());
        }
    } // namespace PlayerPositionOverride
} // namespace app::classes::types
