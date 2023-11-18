#pragma once
#include <Modloader/app/structs/ProjectileExplodeWall.h>
#include <Modloader/app/structs/ProjectileExplodeWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectileExplodeWall {
        inline app::ProjectileExplodeWall__Class** type_info() {
            static app::ProjectileExplodeWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectileExplodeWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectileExplodeWall__Class* get_class() {
            return il2cpp::get_class<app::ProjectileExplodeWall__Class>(type_info(), "", "ProjectileExplodeWall");
        }
        inline app::ProjectileExplodeWall* create() {
            return il2cpp::create_object<app::ProjectileExplodeWall>(get_class());
        }
    } // namespace ProjectileExplodeWall
} // namespace app::classes::types
