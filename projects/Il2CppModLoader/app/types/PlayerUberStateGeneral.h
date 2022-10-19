#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateGeneral {
        inline app::PlayerUberStateGeneral__Class** type_info = (app::PlayerUberStateGeneral__Class**)(modloader::win::memory::resolve_rva(0x04771CE0));
        inline app::PlayerUberStateGeneral__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGeneral__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateGeneral");
        }
        inline app::PlayerUberStateGeneral* create() {
            return il2cpp::create_object<app::PlayerUberStateGeneral>(get_class());
        }
    } // namespace PlayerUberStateGeneral
} // namespace app::classes::types
