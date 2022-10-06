#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver_FollowingEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LaserShieldDamageReceiver_FollowingEffect__Class** type_info;
        inline app::LaserShieldDamageReceiver_FollowingEffect__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldDamageReceiver_FollowingEffect__Class>(type_info, "", "LaserShieldDamageReceiver", "FollowingEffect");
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver_FollowingEffect>(get_class());
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Boxed* box(app::LaserShieldDamageReceiver_FollowingEffect value) {
            return il2cpp::box_value<app::LaserShieldDamageReceiver_FollowingEffect__Boxed>(get_class(), value);
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class(), size);
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create_array(const std::vector<app::LaserShieldDamageReceiver_FollowingEffect__Boxed>& items) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class(), items);
        }
    } // namespace LaserShieldDamageReceiver_FollowingEffect
} // namespace app::classes::types
