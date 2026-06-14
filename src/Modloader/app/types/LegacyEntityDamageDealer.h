#pragma once
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>
#include <Modloader/app/structs/LegacyEntityDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEntityDamageDealer {
        inline app::LegacyEntityDamageDealer__Class** type_info() {
            static app::LegacyEntityDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyEntityDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyEntityDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageDealer__Class>(type_info(), "", "LegacyEntityDamageDealer");
        }
        inline app::LegacyEntityDamageDealer* create() {
            return il2cpp::create_object<app::LegacyEntityDamageDealer>(get_class());
        }
    } // namespace LegacyEntityDamageDealer
} // namespace app::classes::types
