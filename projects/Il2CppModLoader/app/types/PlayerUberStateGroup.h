#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateGroup__Class** type_info;
        inline app::PlayerUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGroup__Class>(type_info, "", "PlayerUberStateGroup");
        }
        inline app::PlayerUberStateGroup* create() {
            return il2cpp::create_object<app::PlayerUberStateGroup>(get_class());
        }
    } // namespace PlayerUberStateGroup
} // namespace app::classes::types
