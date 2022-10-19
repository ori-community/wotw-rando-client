#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWorld_c_DisplayClass30_0 {
        inline app::GameWorld_c_DisplayClass30_0__Class** type_info = (app::GameWorld_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04778AE0));
        inline app::GameWorld_c_DisplayClass30_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorld_c_DisplayClass30_0__Class>(type_info, "", "GameWorld", "<>c__DisplayClass30_0");
        }
        inline app::GameWorld_c_DisplayClass30_0* create() {
            return il2cpp::create_object<app::GameWorld_c_DisplayClass30_0>(get_class());
        }
    } // namespace GameWorld_c_DisplayClass30_0
} // namespace app::classes::types
