#pragma once
#include <Modloader/app/structs/MapMakerMoveOriToPositionBehaviour.h>
#include <Modloader/app/structs/MapMakerMoveOriToPositionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapMakerMoveOriToPositionBehaviour {
        inline app::MapMakerMoveOriToPositionBehaviour__Class** type_info() {
            static app::MapMakerMoveOriToPositionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapMakerMoveOriToPositionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapMakerMoveOriToPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerMoveOriToPositionBehaviour__Class>(type_info(), "Moon", "MapMakerMoveOriToPositionBehaviour");
        }
        inline app::MapMakerMoveOriToPositionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerMoveOriToPositionBehaviour>(get_class());
        }
    } // namespace MapMakerMoveOriToPositionBehaviour
} // namespace app::classes::types
