#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormHidingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WormHidingState__Class** type_info;
        inline app::WormHidingState__Class* get_class() {
            return il2cpp::get_class<app::WormHidingState__Class>(type_info, "", "WormHidingState");
        }
        inline app::WormHidingState* create() {
            return il2cpp::create_object<app::WormHidingState>(get_class());
        }
    } // namespace WormHidingState
} // namespace app::classes::types
