#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vitals_DamageProcessHelper_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vitals_DamageProcessHelper_c__Class** type_info;
        inline app::Vitals_DamageProcessHelper_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_DamageProcessHelper_c__Class>(type_info, "Moon", "Vitals+DamageProcessHelper", "<>c");
        }
        inline app::Vitals_DamageProcessHelper_c* create() {
            return il2cpp::create_object<app::Vitals_DamageProcessHelper_c>(get_class());
        }
    } // namespace Vitals_DamageProcessHelper_c
} // namespace app::classes::types
