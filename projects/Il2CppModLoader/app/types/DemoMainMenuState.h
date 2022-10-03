#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoMainMenuState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoMainMenuState__Class** type_info;
        inline app::DemoMainMenuState__Class* get_class() {
            return il2cpp::get_class<app::DemoMainMenuState__Class>(type_info, "", "DemoMainMenuState");
        }
        inline app::DemoMainMenuState* create() {
            return il2cpp::create_object<app::DemoMainMenuState>(get_class());
        }
    } // namespace DemoMainMenuState
} // namespace app::classes::types
