#pragma once
#include <Modloader/app/structs/DamageDealer_c.h>
#include <Modloader/app/structs/DamageDealer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_c {
        inline app::DamageDealer_c__Class** type_info() {
            static app::DamageDealer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageDealer_c__Class**)(modloader::win::memory::resolve_rva(0x0477D1D0));
            }
            return cache;
        }
        inline app::DamageDealer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_c__Class>(type_info(), "", "DamageDealer", "<>c");
        }
        inline app::DamageDealer_c* create() {
            return il2cpp::create_object<app::DamageDealer_c>(get_class());
        }
    } // namespace DamageDealer_c
} // namespace app::classes::types
