#pragma once
#include <Modloader/app/structs/TileAnimationData.h>
#include <Modloader/app/structs/TileAnimationData__Boxed.h>
#include <Modloader/app/structs/TileAnimationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TileAnimationData {
        inline app::TileAnimationData__Class** type_info() {
            static app::TileAnimationData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TileAnimationData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TileAnimationData__Class* get_class() {
            return il2cpp::get_class<app::TileAnimationData__Class>(type_info(), "UnityEngine.Tilemaps", "TileAnimationData");
        }
        inline app::TileAnimationData* create() {
            return il2cpp::create_object<app::TileAnimationData>(get_class());
        }
        inline app::TileAnimationData__Boxed* box(app::TileAnimationData value) {
            return il2cpp::box_value<app::TileAnimationData__Boxed>(get_class(), value);
        }
    } // namespace TileAnimationData
} // namespace app::classes::types
