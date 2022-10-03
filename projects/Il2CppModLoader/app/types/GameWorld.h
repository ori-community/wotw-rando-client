#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameWorld {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameWorld__Class** type_info;
        inline app::GameWorld__Class* get_class() {
            return il2cpp::get_class<app::GameWorld__Class>(type_info, "", "GameWorld");
        }
        inline app::GameWorld* create() {
            return il2cpp::create_object<app::GameWorld>(get_class());
        }
    } // namespace GameWorld
} // namespace app::classes::types
