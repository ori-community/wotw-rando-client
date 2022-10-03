#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCinematic_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinCinematic_c__Class** type_info;
        inline app::SeinCinematic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCinematic_c__Class>(type_info, "", "SeinCinematic", "<>c");
        }
        inline app::SeinCinematic_c* create() {
            return il2cpp::create_object<app::SeinCinematic_c>(get_class());
        }
    } // namespace SeinCinematic_c
} // namespace app::classes::types
