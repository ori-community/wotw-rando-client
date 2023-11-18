#pragma once
#include <Modloader/app/structs/GroundEnemy3DState.h>
#include <Modloader/app/structs/GroundEnemy3DState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEnemy3DState {
        inline app::GroundEnemy3DState__Class** type_info() {
            static app::GroundEnemy3DState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundEnemy3DState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundEnemy3DState__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy3DState__Class>(type_info(), "", "GroundEnemy3DState");
        }
        inline app::GroundEnemy3DState* create() {
            return il2cpp::create_object<app::GroundEnemy3DState>(get_class());
        }
    } // namespace GroundEnemy3DState
} // namespace app::classes::types
