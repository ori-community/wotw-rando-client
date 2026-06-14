#pragma once
#include <Modloader/app/structs/Terrain_1__Array.h>
#include <Modloader/app/structs/Terrain_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Terrain_1__Array {
        inline app::Terrain_1__Array__Class** type_info() {
            static app::Terrain_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Terrain_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Terrain_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Terrain_1__Array__Class>(type_info(), "UnityEngine", "Terrain[]");
        }
        inline app::Terrain_1__Array* create() {
            return il2cpp::create_object<app::Terrain_1__Array>(get_class());
        }
    } // namespace Terrain_1__Array
} // namespace app::classes::types
