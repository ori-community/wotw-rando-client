#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberState {
        inline app::PlayerUberState__Class** type_info = (app::PlayerUberState__Class**)(modloader::win::memory::resolve_rva(0x04703AF8));
        inline app::PlayerUberState__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberState__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberState");
        }
        inline app::PlayerUberState* create() {
            return il2cpp::create_object<app::PlayerUberState>(get_class());
        }
    } // namespace PlayerUberState
} // namespace app::classes::types
