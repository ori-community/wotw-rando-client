#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStomp_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinStomp_c__Class** type_info;
        inline app::SeinStomp_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStomp_c__Class>(type_info, "", "SeinStomp", "<>c");
        }
        inline app::SeinStomp_c* create() {
            return il2cpp::create_object<app::SeinStomp_c>(get_class());
        }
    } // namespace SeinStomp_c
} // namespace app::classes::types
