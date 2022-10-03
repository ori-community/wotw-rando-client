#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElectricSlugDamageDealer {
        namespace {
            app::ElectricSlugDamageDealer__Class* type_info_ref = nullptr;
        }
        app::ElectricSlugDamageDealer__Class** type_info = &type_info_ref;
        inline app::ElectricSlugDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugDamageDealer__Class>(type_info, "", "ElectricSlugDamageDealer");
        }
        inline app::ElectricSlugDamageDealer* create() {
            return il2cpp::create_object<app::ElectricSlugDamageDealer>(get_class());
        }
    } // namespace ElectricSlugDamageDealer
} // namespace app::classes::types
