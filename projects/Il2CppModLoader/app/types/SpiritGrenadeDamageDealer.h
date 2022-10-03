#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritGrenadeDamageDealer {
        namespace {
            app::SpiritGrenadeDamageDealer__Class* type_info_ref = nullptr;
        }
        app::SpiritGrenadeDamageDealer__Class** type_info = &type_info_ref;
        inline app::SpiritGrenadeDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenadeDamageDealer__Class>(type_info, "", "SpiritGrenadeDamageDealer");
        }
        inline app::SpiritGrenadeDamageDealer* create() {
            return il2cpp::create_object<app::SpiritGrenadeDamageDealer>(get_class());
        }
    } // namespace SpiritGrenadeDamageDealer
} // namespace app::classes::types
