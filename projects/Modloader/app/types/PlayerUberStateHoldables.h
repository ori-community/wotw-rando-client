#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateHoldables {
        inline app::PlayerUberStateHoldables__Class** type_info = (app::PlayerUberStateHoldables__Class**)(modloader::win::memory::resolve_rva(0x0471E718));
        inline app::PlayerUberStateHoldables__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateHoldables__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateHoldables");
        }
        inline app::PlayerUberStateHoldables* create() {
            return il2cpp::create_object<app::PlayerUberStateHoldables>(get_class());
        }
    } // namespace PlayerUberStateHoldables
} // namespace app::classes::types
