#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BounceProjectile {
        namespace {
            app::BounceProjectile__Class* type_info_ref = nullptr;
        }
        app::BounceProjectile__Class** type_info = &type_info_ref;
        inline app::BounceProjectile__Class* get_class() {
            return il2cpp::get_class<app::BounceProjectile__Class>(type_info, "", "BounceProjectile");
        }
        inline app::BounceProjectile* create() {
            return il2cpp::create_object<app::BounceProjectile>(get_class());
        }
    } // namespace BounceProjectile
} // namespace app::classes::types
