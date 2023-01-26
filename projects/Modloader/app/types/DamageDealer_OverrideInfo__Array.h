#pragma once
#include <Modloader/app/structs/DamageDealer_OverrideInfo__Array.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_OverrideInfo__Array {
        inline app::DamageDealer_OverrideInfo__Array__Class** type_info() {
            static app::DamageDealer_OverrideInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageDealer_OverrideInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageDealer_OverrideInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer_OverrideInfo__Array__Class>(type_info(), "", "DamageDealer+OverrideInfo[]");
        }
        inline app::DamageDealer_OverrideInfo__Array* create() {
            return il2cpp::create_object<app::DamageDealer_OverrideInfo__Array>(get_class());
        }
    } // namespace DamageDealer_OverrideInfo__Array
} // namespace app::classes::types
