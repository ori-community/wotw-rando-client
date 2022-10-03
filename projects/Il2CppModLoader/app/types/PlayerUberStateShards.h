#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateShards {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateShards__Class** type_info;
        inline app::PlayerUberStateShards__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateShards__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateShards");
        }
        inline app::PlayerUberStateShards* create() {
            return il2cpp::create_object<app::PlayerUberStateShards>(get_class());
        }
    } // namespace PlayerUberStateShards
} // namespace app::classes::types
