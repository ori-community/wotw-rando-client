#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateShards {
        inline app::PlayerUberStateShards__Class** type_info = (app::PlayerUberStateShards__Class**)(modloader::win::memory::resolve_rva(0x047474A8));
        inline app::PlayerUberStateShards__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateShards__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards");
        }
        inline app::PlayerUberStateShards* create() {
            return il2cpp::create_object<app::PlayerUberStateShards>(get_class());
        }
    } // namespace PlayerUberStateShards
} // namespace app::classes::types
