#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPositionOverride {
        inline app::PlayerPositionOverride__Class** type_info = (app::PlayerPositionOverride__Class**)(modloader::win::memory::resolve_rva(0x0471EDD8));
        inline app::PlayerPositionOverride__Class* get_class() {
            return il2cpp::get_class<app::PlayerPositionOverride__Class>(type_info, "", "PlayerPositionOverride");
        }
        inline app::PlayerPositionOverride* create() {
            return il2cpp::create_object<app::PlayerPositionOverride>(get_class());
        }
    } // namespace PlayerPositionOverride
} // namespace app::classes::types
