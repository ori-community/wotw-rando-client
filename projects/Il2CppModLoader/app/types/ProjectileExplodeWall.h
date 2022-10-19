#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
