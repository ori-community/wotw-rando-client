#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateStats_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateStats_c__Class** type_info;
        inline app::PlayerUberStateStats_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateStats_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateStats", "<>c");
        }
        inline app::PlayerUberStateStats_c* create() {
            return il2cpp::create_object<app::PlayerUberStateStats_c>(get_class());
        }
    } // namespace PlayerUberStateStats_c
} // namespace app::classes::types
