#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingKnockBackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingKnockBackState__Class** type_info;
        inline app::RammingKnockBackState__Class* get_class() {
            return il2cpp::get_class<app::RammingKnockBackState__Class>(type_info, "", "RammingKnockBackState");
        }
        inline app::RammingKnockBackState* create() {
            return il2cpp::create_object<app::RammingKnockBackState>(get_class());
        }
    } // namespace RammingKnockBackState
} // namespace app::classes::types
