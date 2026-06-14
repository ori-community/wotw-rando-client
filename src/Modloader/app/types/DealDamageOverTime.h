#pragma once
#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/DealDamageOverTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DealDamageOverTime {
        inline app::DealDamageOverTime__Class** type_info() {
            static app::DealDamageOverTime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DealDamageOverTime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DealDamageOverTime__Class* get_class() {
            return il2cpp::get_class<app::DealDamageOverTime__Class>(type_info(), "", "DealDamageOverTime");
        }
        inline app::DealDamageOverTime* create() {
            return il2cpp::create_object<app::DealDamageOverTime>(get_class());
        }
    } // namespace DealDamageOverTime
} // namespace app::classes::types
