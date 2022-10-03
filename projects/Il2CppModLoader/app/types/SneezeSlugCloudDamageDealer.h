#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugCloudDamageDealer {
        namespace {
            app::SneezeSlugCloudDamageDealer__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugCloudDamageDealer__Class** type_info = &type_info_ref;
        inline app::SneezeSlugCloudDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugCloudDamageDealer__Class>(type_info, "", "SneezeSlugCloudDamageDealer");
        }
        inline app::SneezeSlugCloudDamageDealer* create() {
            return il2cpp::create_object<app::SneezeSlugCloudDamageDealer>(get_class());
        }
    } // namespace SneezeSlugCloudDamageDealer
} // namespace app::classes::types
