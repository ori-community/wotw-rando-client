#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect__Array__Class.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect__Array.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver_FollowingEffect__Array {
        namespace {
            inline app::LaserShieldDamageReceiver_FollowingEffect__Array__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array__Class** type_info = &type_info_ref;
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldDamageReceiver_FollowingEffect__Array__Class>(type_info, "", "LaserShieldDamageReceiver+FollowingEffect[]");
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class());
        }
    } // namespace LaserShieldDamageReceiver_FollowingEffect__Array
} // namespace app::classes::types
