#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplaySoundManager__Class** type_info;
        inline app::GameplaySoundManager__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundManager__Class>(type_info, "", "GameplaySoundManager");
        }
        inline app::GameplaySoundManager* create() {
            return il2cpp::create_object<app::GameplaySoundManager>(get_class());
        }
    } // namespace GameplaySoundManager
} // namespace app::classes::types
