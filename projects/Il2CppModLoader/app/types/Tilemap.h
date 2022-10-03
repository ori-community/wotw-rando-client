#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tilemap {
        namespace {
            app::Tilemap__Class* type_info_ref = nullptr;
        }
        app::Tilemap__Class** type_info = &type_info_ref;
        inline app::Tilemap__Class* get_class() {
            return il2cpp::get_class<app::Tilemap__Class>(type_info, "UnityEngine.Tilemaps", "Tilemap");
        }
        inline app::Tilemap* create() {
            return il2cpp::create_object<app::Tilemap>(get_class());
        }
    } // namespace Tilemap
} // namespace app::classes::types
