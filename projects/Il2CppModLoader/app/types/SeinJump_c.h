#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinJump_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinJump_c__Class** type_info;
        inline app::SeinJump_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinJump_c__Class>(type_info, "", "SeinJump", "<>c");
        }
        inline app::SeinJump_c* create() {
            return il2cpp::create_object<app::SeinJump_c>(get_class());
        }
    } // namespace SeinJump_c
} // namespace app::classes::types
