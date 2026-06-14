#pragma once
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Array.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_SortedDamageEntry__Array {
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class** type_info() {
            static app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class>(type_info(), "Moon", "Vitals+DamageProcessHelper+SortedDamageEntry[]");
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper_SortedDamageEntry__Array
} // namespace app::classes::types
