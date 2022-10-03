#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxTailHurtZone_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FoxTailHurtZone_c__Class** type_info;
        inline app::FoxTailHurtZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxTailHurtZone_c__Class>(type_info, "", "FoxTailHurtZone", "<>c");
        }
        inline app::FoxTailHurtZone_c* create() {
            return il2cpp::create_object<app::FoxTailHurtZone_c>(get_class());
        }
    } // namespace FoxTailHurtZone_c
} // namespace app::classes::types
