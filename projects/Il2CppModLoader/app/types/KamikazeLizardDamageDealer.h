#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardDamageDealer {
        namespace {
            app::KamikazeLizardDamageDealer__Class* type_info_ref = nullptr;
        }
        app::KamikazeLizardDamageDealer__Class** type_info = &type_info_ref;
        inline app::KamikazeLizardDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardDamageDealer__Class>(type_info, "", "KamikazeLizardDamageDealer");
        }
        inline app::KamikazeLizardDamageDealer* create() {
            return il2cpp::create_object<app::KamikazeLizardDamageDealer>(get_class());
        }
    } // namespace KamikazeLizardDamageDealer
} // namespace app::classes::types
