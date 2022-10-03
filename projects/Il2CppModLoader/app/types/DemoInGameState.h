#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoInGameState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoInGameState__Class** type_info;
        inline app::DemoInGameState__Class* get_class() {
            return il2cpp::get_class<app::DemoInGameState__Class>(type_info, "", "DemoInGameState");
        }
        inline app::DemoInGameState* create() {
            return il2cpp::create_object<app::DemoInGameState>(get_class());
        }
    } // namespace DemoInGameState
} // namespace app::classes::types
