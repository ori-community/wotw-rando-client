#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProjectileExplodeWall__Class.h>
#include <Modloader/app/structs/ProjectileExplodeWall.h>

namespace app::classes::types {
    namespace ProjectileExplodeWall {
        namespace {
            inline app::ProjectileExplodeWall__Class* type_info_ref = nullptr;
        }
        inline app::ProjectileExplodeWall__Class** type_info = &type_info_ref;
        inline app::ProjectileExplodeWall__Class* get_class() {
            return il2cpp::get_class<app::ProjectileExplodeWall__Class>(type_info, "", "ProjectileExplodeWall");
        }
        inline app::ProjectileExplodeWall* create() {
            return il2cpp::create_object<app::ProjectileExplodeWall>(get_class());
        }
    } // namespace ProjectileExplodeWall
} // namespace app::classes::types
