#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Class.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Boxed.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Array.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_SortedDamageEntry {
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Class** type_info = (app::Vitals_DamageProcessHelper_SortedDamageEntry__Class**)(modloader::win::memory::resolve_rva(0x04788440));
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
        inline app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* create_array(const std::vector<app::Vitals_DamageProcessHelper_SortedDamageEntry>& items) {
            return il2cpp::array_new<app::Vitals_DamageProcessHelper_SortedDamageEntry__Array>(get_class(), items);
        }
    } // namespace Vitals_DamageProcessHelper_SortedDamageEntry
} // namespace app::classes::types
