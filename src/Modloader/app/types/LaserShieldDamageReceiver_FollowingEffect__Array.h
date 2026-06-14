#pragma once
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect__Array.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver_FollowingEffect__Array {
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array__Class** type_info() {
            static app::LaserShieldDamageReceiver_FollowingEffect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldDamageReceiver_FollowingEffect__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldDamageReceiver_FollowingEffect__Array__Class>(type_info(), "", "LaserShieldDamageReceiver+FollowingEffect[]");
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class());
        }
    } // namespace LaserShieldDamageReceiver_FollowingEffect__Array
} // namespace app::classes::types
