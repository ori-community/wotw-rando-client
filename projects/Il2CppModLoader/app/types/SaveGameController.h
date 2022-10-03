#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveGameController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveGameController__Class** type_info;
        inline app::SaveGameController__Class* get_class() {
            return il2cpp::get_class<app::SaveGameController__Class>(type_info, "", "SaveGameController");
        }
        inline app::SaveGameController* create() {
            return il2cpp::create_object<app::SaveGameController>(get_class());
        }
    } // namespace SaveGameController
} // namespace app::classes::types
