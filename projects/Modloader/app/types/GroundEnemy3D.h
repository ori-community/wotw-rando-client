#pragma once
#include <Modloader/app/structs/GroundEnemy3D.h>
#include <Modloader/app/structs/GroundEnemy3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEnemy3D {
        inline app::GroundEnemy3D__Class** type_info() {
            static app::GroundEnemy3D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundEnemy3D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundEnemy3D__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy3D__Class>(type_info(), "", "GroundEnemy3D");
        }
        inline app::GroundEnemy3D* create() {
            return il2cpp::create_object<app::GroundEnemy3D>(get_class());
        }
    } // namespace GroundEnemy3D
} // namespace app::classes::types
