#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackableSwitch_c {
        inline app::AttackableSwitch_c__Class** type_info = (app::AttackableSwitch_c__Class**)(modloader::win::memory::resolve_rva(0x0478D2B8));
        inline app::AttackableSwitch_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableSwitch_c__Class>(type_info, "", "AttackableSwitch", "<>c");
        }
        inline app::AttackableSwitch_c* create() {
            return il2cpp::create_object<app::AttackableSwitch_c>(get_class());
        }
    } // namespace AttackableSwitch_c
} // namespace app::classes::types
