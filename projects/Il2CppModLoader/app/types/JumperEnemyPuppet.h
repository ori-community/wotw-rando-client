#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyPuppet__Class** type_info;
        inline app::JumperEnemyPuppet__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyPuppet__Class>(type_info, "", "JumperEnemyPuppet");
        }
        inline app::JumperEnemyPuppet* create() {
            return il2cpp::create_object<app::JumperEnemyPuppet>(get_class());
        }
    } // namespace JumperEnemyPuppet
} // namespace app::classes::types
