#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSpawnManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberSpawnManager__Class** type_info;
        inline app::UberSpawnManager__Class* get_class() {
            return il2cpp::get_class<app::UberSpawnManager__Class>(type_info, "", "UberSpawnManager");
        }
        inline app::UberSpawnManager* create() {
            return il2cpp::create_object<app::UberSpawnManager>(get_class());
        }
    } // namespace UberSpawnManager
} // namespace app::classes::types
