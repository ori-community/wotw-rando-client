#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxHeadHurtZone_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FoxHeadHurtZone_c__Class** type_info;
        inline app::FoxHeadHurtZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxHeadHurtZone_c__Class>(type_info, "", "FoxHeadHurtZone", "<>c");
        }
        inline app::FoxHeadHurtZone_c* create() {
            return il2cpp::create_object<app::FoxHeadHurtZone_c>(get_class());
        }
    } // namespace FoxHeadHurtZone_c
} // namespace app::classes::types
