#pragma once
#include <Modloader/app/structs/ServerSeekingProjectile.h>
#include <Modloader/app/structs/ServerSeekingProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSeekingProjectile {
        inline app::ServerSeekingProjectile__Class** type_info() {
            static app::ServerSeekingProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerSeekingProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerSeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerSeekingProjectile__Class>(type_info(), "", "ServerSeekingProjectile");
        }
        inline app::ServerSeekingProjectile* create() {
            return il2cpp::create_object<app::ServerSeekingProjectile>(get_class());
        }
    } // namespace ServerSeekingProjectile
} // namespace app::classes::types
