#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageDealer__Class** type_info;
        inline app::DamageDealer__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer__Class>(type_info, "", "DamageDealer");
        }
        inline app::DamageDealer* create() {
            return il2cpp::create_object<app::DamageDealer>(get_class());
        }
        inline app::DamageDealer__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageDealer__Array>(get_class(), size);
        }
        inline app::DamageDealer__Array* create_array(const std::vector<app::DamageDealer*>& items) {
            return il2cpp::array_new<app::DamageDealer__Array>(get_class(), items);
        }
    } // namespace DamageDealer
} // namespace app::classes::types
