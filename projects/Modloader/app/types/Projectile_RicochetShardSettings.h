#pragma once
#include <Modloader/app/structs/Projectile_RicochetShardSettings.h>
#include <Modloader/app/structs/Projectile_RicochetShardSettings__Boxed.h>
#include <Modloader/app/structs/Projectile_RicochetShardSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Projectile_RicochetShardSettings {
        inline app::Projectile_RicochetShardSettings__Class** type_info() {
            static app::Projectile_RicochetShardSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Projectile_RicochetShardSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Projectile_RicochetShardSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_RicochetShardSettings__Class>(type_info(), "", "Projectile", "RicochetShardSettings");
        }
        inline app::Projectile_RicochetShardSettings* create() {
            return il2cpp::create_object<app::Projectile_RicochetShardSettings>(get_class());
        }
        inline app::Projectile_RicochetShardSettings__Boxed* box(app::Projectile_RicochetShardSettings value) {
            return il2cpp::box_value<app::Projectile_RicochetShardSettings__Boxed>(get_class(), value);
        }
    } // namespace Projectile_RicochetShardSettings
} // namespace app::classes::types
