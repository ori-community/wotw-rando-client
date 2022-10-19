#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Terrain_1 {
        namespace {
            inline app::Terrain_1__Class* type_info_ref = nullptr;
        }
        inline app::Terrain_1__Class** type_info = &type_info_ref;
        inline app::Terrain_1__Class* get_class() {
            return il2cpp::get_class<app::Terrain_1__Class>(type_info, "UnityEngine", "Terrain");
        }
        inline app::Terrain_1* create() {
            return il2cpp::create_object<app::Terrain_1>(get_class());
        }
        inline app::Terrain_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Terrain_1__Array>(get_class(), size);
        }
        inline app::Terrain_1__Array* create_array(const std::vector<app::Terrain_1*>& items) {
            return il2cpp::array_new<app::Terrain_1__Array>(get_class(), items);
        }
    } // namespace Terrain_1
} // namespace app::classes::types
