#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_SortedDamageEntry__Array {
        namespace {
            inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class** type_info = &type_info_ref;
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array__Class>(type_info, "Moon", "Vitals+DamageProcessHelper+SortedDamageEntry[]");
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper_SortedDamageEntry__Array
} // namespace app::classes::types
