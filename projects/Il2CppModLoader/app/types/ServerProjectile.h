#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerProjectile {
        namespace {
            app::ServerProjectile__Class* type_info_ref = nullptr;
        }
        app::ServerProjectile__Class** type_info = &type_info_ref;
        inline app::ServerProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectile__Class>(type_info, "", "ServerProjectile");
        }
        inline app::ServerProjectile* create() {
            return il2cpp::create_object<app::ServerProjectile>(get_class());
        }
    } // namespace ServerProjectile
} // namespace app::classes::types
