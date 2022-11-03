#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateHoldables_c {
        inline app::PlayerUberStateHoldables_c__Class** type_info = (app::PlayerUberStateHoldables_c__Class**)(modloader::win::memory::resolve_rva(0x0472C4C8));
        inline app::PlayerUberStateHoldables_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateHoldables_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateHoldables", "<>c");
        }
        inline app::PlayerUberStateHoldables_c* create() {
            return il2cpp::create_object<app::PlayerUberStateHoldables_c>(get_class());
        }
    } // namespace PlayerUberStateHoldables_c
} // namespace app::classes::types
