#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotion_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoLocomotion_c__Class** type_info;
        inline app::SkeetoLocomotion_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoLocomotion_c__Class>(type_info, "Moon", "SkeetoLocomotion", "<>c");
        }
        inline app::SkeetoLocomotion_c* create() {
            return il2cpp::create_object<app::SkeetoLocomotion_c>(get_class());
        }
    } // namespace SkeetoLocomotion_c
} // namespace app::classes::types
