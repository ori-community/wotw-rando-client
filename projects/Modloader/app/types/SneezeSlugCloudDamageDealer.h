#pragma once
#include <Modloader/app/structs/SneezeSlugCloudDamageDealer.h>
#include <Modloader/app/structs/SneezeSlugCloudDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugCloudDamageDealer {
        inline app::SneezeSlugCloudDamageDealer__Class** type_info() {
            static app::SneezeSlugCloudDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugCloudDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugCloudDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugCloudDamageDealer__Class>(type_info(), "", "SneezeSlugCloudDamageDealer");
        }
        inline app::SneezeSlugCloudDamageDealer* create() {
            return il2cpp::create_object<app::SneezeSlugCloudDamageDealer>(get_class());
        }
    } // namespace SneezeSlugCloudDamageDealer
} // namespace app::classes::types
