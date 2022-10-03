#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vitals_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vitals_c__Class** type_info;
        inline app::Vitals_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_c__Class>(type_info, "Moon", "Vitals", "<>c");
        }
        inline app::Vitals_c* create() {
            return il2cpp::create_object<app::Vitals_c>(get_class());
        }
    } // namespace Vitals_c
} // namespace app::classes::types
