#pragma once
#include <Modloader/app/structs/ServerProjectile.h>
#include <Modloader/app/structs/ServerProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerProjectile {
        inline app::ServerProjectile__Class** type_info() {
            static app::ServerProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectile__Class>(type_info(), "", "ServerProjectile");
        }
        inline app::ServerProjectile* create() {
            return il2cpp::create_object<app::ServerProjectile>(get_class());
        }
    } // namespace ServerProjectile
} // namespace app::classes::types
