#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleSpawnBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleSpawnBehaviour__Class** type_info;
        inline app::TentacleSpawnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleSpawnBehaviour__Class>(type_info, "Moon", "TentacleSpawnBehaviour");
        }
        inline app::TentacleSpawnBehaviour* create() {
            return il2cpp::create_object<app::TentacleSpawnBehaviour>(get_class());
        }
    } // namespace TentacleSpawnBehaviour
} // namespace app::classes::types
