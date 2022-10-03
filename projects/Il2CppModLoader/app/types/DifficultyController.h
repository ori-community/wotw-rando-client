#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DifficultyController__Class** type_info;
        inline app::DifficultyController__Class* get_class() {
            return il2cpp::get_class<app::DifficultyController__Class>(type_info, "", "DifficultyController");
        }
        inline app::DifficultyController* create() {
            return il2cpp::create_object<app::DifficultyController>(get_class());
        }
    } // namespace DifficultyController
} // namespace app::classes::types
