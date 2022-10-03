#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Terrain_1__Array {
        namespace {
            app::Terrain_1__Array__Class* type_info_ref = nullptr;
        }
        app::Terrain_1__Array__Class** type_info = &type_info_ref;
        inline app::Terrain_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Terrain_1__Array__Class>(type_info, "UnityEngine", "Terrain[]");
        }
        inline app::Terrain_1__Array* create() {
            return il2cpp::create_object<app::Terrain_1__Array>(get_class());
        }
    } // namespace Terrain_1__Array
} // namespace app::classes::types
