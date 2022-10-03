#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishAttackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishAttackState__Class** type_info;
        inline app::FishAttackState__Class* get_class() {
            return il2cpp::get_class<app::FishAttackState__Class>(type_info, "", "FishAttackState");
        }
        inline app::FishAttackState* create() {
            return il2cpp::create_object<app::FishAttackState>(get_class());
        }
    } // namespace FishAttackState
} // namespace app::classes::types
