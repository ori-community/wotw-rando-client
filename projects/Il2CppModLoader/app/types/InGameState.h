#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InGameState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InGameState__Class** type_info;
        inline app::InGameState__Class* get_class() {
            return il2cpp::get_class<app::InGameState__Class>(type_info, "", "InGameState");
        }
        inline app::InGameState* create() {
            return il2cpp::create_object<app::InGameState>(get_class());
        }
    } // namespace InGameState
} // namespace app::classes::types
