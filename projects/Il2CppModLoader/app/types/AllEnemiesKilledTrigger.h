#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AllEnemiesKilledTrigger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AllEnemiesKilledTrigger__Class** type_info;
        inline app::AllEnemiesKilledTrigger__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledTrigger__Class>(type_info, "", "AllEnemiesKilledTrigger");
        }
        inline app::AllEnemiesKilledTrigger* create() {
            return il2cpp::create_object<app::AllEnemiesKilledTrigger>(get_class());
        }
    } // namespace AllEnemiesKilledTrigger
} // namespace app::classes::types
