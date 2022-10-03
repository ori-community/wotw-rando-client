#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWormDamageDealer {
        namespace {
            app::BabyWormDamageDealer__Class* type_info_ref = nullptr;
        }
        app::BabyWormDamageDealer__Class** type_info = &type_info_ref;
        inline app::BabyWormDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::BabyWormDamageDealer__Class>(type_info, "", "BabyWormDamageDealer");
        }
        inline app::BabyWormDamageDealer* create() {
            return il2cpp::create_object<app::BabyWormDamageDealer>(get_class());
        }
    } // namespace BabyWormDamageDealer
} // namespace app::classes::types
