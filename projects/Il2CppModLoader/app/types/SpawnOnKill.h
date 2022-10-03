#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnOnKill {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpawnOnKill__Class** type_info;
        inline app::SpawnOnKill__Class* get_class() {
            return il2cpp::get_class<app::SpawnOnKill__Class>(type_info, "", "SpawnOnKill");
        }
        inline app::SpawnOnKill* create() {
            return il2cpp::create_object<app::SpawnOnKill>(get_class());
        }
    } // namespace SpawnOnKill
} // namespace app::classes::types
