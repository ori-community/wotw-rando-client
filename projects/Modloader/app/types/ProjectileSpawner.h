#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProjectileSpawner__Class.h>
#include <Modloader/app/structs/ProjectileSpawner.h>

namespace app::classes::types {
    namespace ProjectileSpawner {
        inline app::ProjectileSpawner__Class** type_info = (app::ProjectileSpawner__Class**)(modloader::win::memory::resolve_rva(0x0472EAC8));
        inline app::ProjectileSpawner__Class* get_class() {
            return il2cpp::get_class<app::ProjectileSpawner__Class>(type_info, "", "ProjectileSpawner");
        }
        inline app::ProjectileSpawner* create() {
            return il2cpp::create_object<app::ProjectileSpawner>(get_class());
        }
    } // namespace ProjectileSpawner
} // namespace app::classes::types
