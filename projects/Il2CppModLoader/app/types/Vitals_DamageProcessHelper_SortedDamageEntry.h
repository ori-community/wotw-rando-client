#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_SortedDamageEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vitals_DamageProcessHelper_SortedDamageEntry__Class** type_info;
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper_SortedDamageEntry__Class>(type_info, "Moon", "Vitals+DamageProcessHelper", "SortedDamageEntry");
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_SortedDamageEntry>(get_class());
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Boxed* box(app::Vitals_DamageProcessHelper_SortedDamageEntry value) {
            return il2cpp::box_value<app::Vitals_DamageProcessHelper_SortedDamageEntry__Boxed>(get_class(), value);
        }
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array>(get_class(), size);
        }
    } // namespace Vitals_DamageProcessHelper_SortedDamageEntry
} // namespace app::classes::types
