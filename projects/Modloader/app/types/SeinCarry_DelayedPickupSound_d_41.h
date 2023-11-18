#pragma once
#include <Modloader/app/structs/SeinCarry_DelayedPickupSound_d_41.h>
#include <Modloader/app/structs/SeinCarry_DelayedPickupSound_d_41__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCarry_DelayedPickupSound_d_41 {
        inline app::SeinCarry_DelayedPickupSound_d_41__Class** type_info() {
            static app::SeinCarry_DelayedPickupSound_d_41__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinCarry_DelayedPickupSound_d_41__Class**)(modloader::win::memory::resolve_rva(0x0476AC80));
            }
            return cache;
        }
        inline app::SeinCarry_DelayedPickupSound_d_41__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_DelayedPickupSound_d_41__Class>(type_info(), "", "SeinCarry", "<DelayedPickupSound>d__41");
        }
        inline app::SeinCarry_DelayedPickupSound_d_41* create() {
            return il2cpp::create_object<app::SeinCarry_DelayedPickupSound_d_41>(get_class());
        }
    } // namespace SeinCarry_DelayedPickupSound_d_41
} // namespace app::classes::types
