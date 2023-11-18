#pragma once
#include <Modloader/app/structs/ServerProjectileSpawner.h>
#include <Modloader/app/structs/ServerProjectileSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawner {
        inline app::ServerProjectileSpawner__Class** type_info() {
            static app::ServerProjectileSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerProjectileSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerProjectileSpawner__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectileSpawner__Class>(type_info(), "", "ServerProjectileSpawner");
        }
        inline app::ServerProjectileSpawner* create() {
            return il2cpp::create_object<app::ServerProjectileSpawner>(get_class());
        }
    } // namespace ServerProjectileSpawner
} // namespace app::classes::types
