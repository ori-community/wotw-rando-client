#pragma once
#include <Modloader/app/structs/TentacleSpawnBehaviour.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleSpawnBehaviour {
        inline app::TentacleSpawnBehaviour__Class** type_info() {
            static app::TentacleSpawnBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleSpawnBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0471C6F0));
            }
            return cache;
        }
        inline app::TentacleSpawnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleSpawnBehaviour__Class>(type_info(), "Moon", "TentacleSpawnBehaviour");
        }
        inline app::TentacleSpawnBehaviour* create() {
            return il2cpp::create_object<app::TentacleSpawnBehaviour>(get_class());
        }
    } // namespace TentacleSpawnBehaviour
} // namespace app::classes::types
