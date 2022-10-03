#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCarry_DelayedPickupSound_d_41 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinCarry_DelayedPickupSound_d_41__Class** type_info;
        inline app::SeinCarry_DelayedPickupSound_d_41__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_DelayedPickupSound_d_41__Class>(type_info, "", "SeinCarry", "<DelayedPickupSound>d__41");
        }
        inline app::SeinCarry_DelayedPickupSound_d_41* create() {
            return il2cpp::create_object<app::SeinCarry_DelayedPickupSound_d_41>(get_class());
        }
    } // namespace SeinCarry_DelayedPickupSound_d_41
} // namespace app::classes::types
