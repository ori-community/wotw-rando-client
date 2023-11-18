#pragma once
#include <Modloader/app/structs/KamikazeLizardDamageDealer.h>
#include <Modloader/app/structs/KamikazeLizardDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardDamageDealer {
        inline app::KamikazeLizardDamageDealer__Class** type_info() {
            static app::KamikazeLizardDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeLizardDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeLizardDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardDamageDealer__Class>(type_info(), "", "KamikazeLizardDamageDealer");
        }
        inline app::KamikazeLizardDamageDealer* create() {
            return il2cpp::create_object<app::KamikazeLizardDamageDealer>(get_class());
        }
    } // namespace KamikazeLizardDamageDealer
} // namespace app::classes::types
