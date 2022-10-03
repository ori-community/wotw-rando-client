#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DifficultyController_c__Class** type_info;
        inline app::DifficultyController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DifficultyController_c__Class>(type_info, "", "DifficultyController", "<>c");
        }
        inline app::DifficultyController_c* create() {
            return il2cpp::create_object<app::DifficultyController_c>(get_class());
        }
    } // namespace DifficultyController_c
} // namespace app::classes::types
