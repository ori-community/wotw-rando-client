#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket__Class.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket__Boxed.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket__Array.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_DamageBucket {
        inline app::Vitals_DamageProcessHelper_DamageBucket__Class** type_info = (app::Vitals_DamageProcessHelper_DamageBucket__Class**)(modloader::win::memory::resolve_rva(0x04758250));
        inline app::Vitals_DamageProcessHelper_DamageBucket__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper_DamageBucket__Class>(type_info, "Moon", "Vitals+DamageProcessHelper", "DamageBucket");
        }
        inline app::Vitals_DamageProcessHelper_DamageBucket* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_DamageBucket>(get_class());
        }
        inline app::Vitals_DamageProcessHelper_DamageBucket__Boxed* box(app::Vitals_DamageProcessHelper_DamageBucket value) {
            return il2cpp::box_value<app::Vitals_DamageProcessHelper_DamageBucket__Boxed>(get_class(), value);
        }
        inline app::Vitals_DamageProcessHelper_DamageBucket__Array* create_array(int size) {
            return il2cpp::array_new<app::Vitals_DamageProcessHelper_DamageBucket__Array>(get_class(), size);
        }
        inline app::Vitals_DamageProcessHelper_DamageBucket__Array* create_array(const std::vector<app::Vitals_DamageProcessHelper_DamageBucket>& items) {
            return il2cpp::array_new<app::Vitals_DamageProcessHelper_DamageBucket__Array>(get_class(), items);
        }
    } // namespace Vitals_DamageProcessHelper_DamageBucket
} // namespace app::classes::types
