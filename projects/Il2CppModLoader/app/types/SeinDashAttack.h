#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDashAttack {
        inline app::SeinDashAttack__Class** type_info = (app::SeinDashAttack__Class**)(modloader::win::memory::resolve_rva(0x04775698));
        inline app::SeinDashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinDashAttack__Class>(type_info, "", "SeinDashAttack");
        }
        inline app::SeinDashAttack* create() {
            return il2cpp::create_object<app::SeinDashAttack>(get_class());
        }
    } // namespace SeinDashAttack
} // namespace app::classes::types
