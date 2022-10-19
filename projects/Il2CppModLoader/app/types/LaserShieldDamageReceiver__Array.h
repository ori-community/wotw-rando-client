#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver__Array {
        namespace {
            inline app::LaserShieldDamageReceiver__Array__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldDamageReceiver__Array__Class** type_info = &type_info_ref;
        inline app::LaserShieldDamageReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldDamageReceiver__Array__Class>(type_info, "", "LaserShieldDamageReceiver[]");
        }
        inline app::LaserShieldDamageReceiver__Array* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver__Array>(get_class());
        }
    } // namespace LaserShieldDamageReceiver__Array
} // namespace app::classes::types
