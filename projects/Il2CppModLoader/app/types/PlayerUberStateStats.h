#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateStats {
        inline app::PlayerUberStateStats__Class** type_info = (app::PlayerUberStateStats__Class**)(modloader::win::memory::resolve_rva(0x04766978));
        inline app::PlayerUberStateStats__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateStats__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateStats");
        }
        inline app::PlayerUberStateStats* create() {
            return il2cpp::create_object<app::PlayerUberStateStats>(get_class());
        }
    } // namespace PlayerUberStateStats
} // namespace app::classes::types
