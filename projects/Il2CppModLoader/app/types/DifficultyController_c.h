#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DifficultyController_c {
        inline app::DifficultyController_c__Class** type_info = (app::DifficultyController_c__Class**)(modloader::win::memory::resolve_rva(0x0472B960));
        inline app::DifficultyController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DifficultyController_c__Class>(type_info, "", "DifficultyController", "<>c");
        }
        inline app::DifficultyController_c* create() {
            return il2cpp::create_object<app::DifficultyController_c>(get_class());
        }
    } // namespace DifficultyController_c
} // namespace app::classes::types
