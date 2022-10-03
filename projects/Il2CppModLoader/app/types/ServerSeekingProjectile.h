#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSeekingProjectile {
        namespace {
            app::ServerSeekingProjectile__Class* type_info_ref = nullptr;
        }
        app::ServerSeekingProjectile__Class** type_info = &type_info_ref;
        inline app::ServerSeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerSeekingProjectile__Class>(type_info, "", "ServerSeekingProjectile");
        }
        inline app::ServerSeekingProjectile* create() {
            return il2cpp::create_object<app::ServerSeekingProjectile>(get_class());
        }
    } // namespace ServerSeekingProjectile
} // namespace app::classes::types
