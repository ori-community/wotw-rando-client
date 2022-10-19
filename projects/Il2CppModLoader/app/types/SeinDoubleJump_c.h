#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDoubleJump_c {
        inline app::SeinDoubleJump_c__Class** type_info = (app::SeinDoubleJump_c__Class**)(modloader::win::memory::resolve_rva(0x0475DEF8));
        inline app::SeinDoubleJump_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDoubleJump_c__Class>(type_info, "", "SeinDoubleJump", "<>c");
        }
        inline app::SeinDoubleJump_c* create() {
            return il2cpp::create_object<app::SeinDoubleJump_c>(get_class());
        }
    } // namespace SeinDoubleJump_c
} // namespace app::classes::types
