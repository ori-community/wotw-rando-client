#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LaserShieldDamageReceiver__Class** type_info;
        inline app::LaserShieldDamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldDamageReceiver__Class>(type_info, "", "LaserShieldDamageReceiver");
        }
        inline app::LaserShieldDamageReceiver* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver>(get_class());
        }
        inline app::LaserShieldDamageReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver__Array>(get_class(), size);
        }
        inline app::LaserShieldDamageReceiver__Array* create_array(const std::vector<app::LaserShieldDamageReceiver*>& items) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver__Array>(get_class(), items);
        }
    } // namespace LaserShieldDamageReceiver
} // namespace app::classes::types
