#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishIdleState__Class** type_info;
        inline app::FishIdleState__Class* get_class() {
            return il2cpp::get_class<app::FishIdleState__Class>(type_info, "", "FishIdleState");
        }
        inline app::FishIdleState* create() {
            return il2cpp::create_object<app::FishIdleState>(get_class());
        }
    } // namespace FishIdleState
} // namespace app::classes::types
