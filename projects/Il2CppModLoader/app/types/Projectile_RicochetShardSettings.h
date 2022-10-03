#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Projectile_RicochetShardSettings {
        namespace {
            app::Projectile_RicochetShardSettings__Class* type_info_ref = nullptr;
        }
        app::Projectile_RicochetShardSettings__Class** type_info = &type_info_ref;
        inline app::Projectile_RicochetShardSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_RicochetShardSettings__Class>(type_info, "", "Projectile", "RicochetShardSettings");
        }
        inline app::Projectile_RicochetShardSettings* create() {
            return il2cpp::create_object<app::Projectile_RicochetShardSettings>(get_class());
        }
        inline app::Projectile_RicochetShardSettings__Boxed* box(app::Projectile_RicochetShardSettings value) {
            return il2cpp::box_value<app::Projectile_RicochetShardSettings__Boxed>(get_class(), value);
        }
    } // namespace Projectile_RicochetShardSettings
} // namespace app::classes::types
