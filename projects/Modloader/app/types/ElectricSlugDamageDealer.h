#pragma once
#include <Modloader/app/structs/ElectricSlugDamageDealer.h>
#include <Modloader/app/structs/ElectricSlugDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElectricSlugDamageDealer {
        inline app::ElectricSlugDamageDealer__Class** type_info() {
            static app::ElectricSlugDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElectricSlugDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElectricSlugDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugDamageDealer__Class>(type_info(), "", "ElectricSlugDamageDealer");
        }
        inline app::ElectricSlugDamageDealer* create() {
            return il2cpp::create_object<app::ElectricSlugDamageDealer>(get_class());
        }
    } // namespace ElectricSlugDamageDealer
} // namespace app::classes::types
