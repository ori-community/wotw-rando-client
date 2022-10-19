#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DemoMainMenuState {
        inline app::DemoMainMenuState__Class** type_info = (app::DemoMainMenuState__Class**)(modloader::win::memory::resolve_rva(0x04796668));
        inline app::DemoMainMenuState__Class* get_class() {
            return il2cpp::get_class<app::DemoMainMenuState__Class>(type_info, "", "DemoMainMenuState");
        }
        inline app::DemoMainMenuState* create() {
            return il2cpp::create_object<app::DemoMainMenuState>(get_class());
        }
    } // namespace DemoMainMenuState
} // namespace app::classes::types
