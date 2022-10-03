#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayValidator_c__Class** type_info;
        inline app::ReplayValidator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_c__Class>(type_info, "Moon.Race", "ReplayValidator", "<>c");
        }
        inline app::ReplayValidator_c* create() {
            return il2cpp::create_object<app::ReplayValidator_c>(get_class());
        }
    } // namespace ReplayValidator_c
} // namespace app::classes::types
