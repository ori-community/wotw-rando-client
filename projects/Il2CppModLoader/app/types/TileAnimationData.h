#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TileAnimationData {
        namespace {
            app::TileAnimationData__Class* type_info_ref = nullptr;
        }
        app::TileAnimationData__Class** type_info = &type_info_ref;
        inline app::TileAnimationData__Class* get_class() {
            return il2cpp::get_class<app::TileAnimationData__Class>(type_info, "UnityEngine.Tilemaps", "TileAnimationData");
        }
        inline app::TileAnimationData* create() {
            return il2cpp::create_object<app::TileAnimationData>(get_class());
        }
        inline app::TileAnimationData__Boxed* box(app::TileAnimationData value) {
            return il2cpp::box_value<app::TileAnimationData__Boxed>(get_class(), value);
        }
    } // namespace TileAnimationData
} // namespace app::classes::types
