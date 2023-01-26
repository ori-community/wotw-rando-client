#pragma once
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Array.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver_OverrideInfo__Array {
        inline app::DamageReceiver_OverrideInfo__Array__Class** type_info() {
            static app::DamageReceiver_OverrideInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReceiver_OverrideInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReceiver_OverrideInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver_OverrideInfo__Array__Class>(type_info(), "Moon", "DamageReceiver+OverrideInfo[]");
        }
        inline app::DamageReceiver_OverrideInfo__Array* create() {
            return il2cpp::create_object<app::DamageReceiver_OverrideInfo__Array>(get_class());
        }
    } // namespace DamageReceiver_OverrideInfo__Array
} // namespace app::classes::types
