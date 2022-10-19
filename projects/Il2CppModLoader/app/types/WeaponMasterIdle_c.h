#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponMasterIdle_c {
        inline app::WeaponMasterIdle_c__Class** type_info = (app::WeaponMasterIdle_c__Class**)(modloader::win::memory::resolve_rva(0x0471F810));
        inline app::WeaponMasterIdle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WeaponMasterIdle_c__Class>(type_info, "", "WeaponMasterIdle", "<>c");
        }
        inline app::WeaponMasterIdle_c* create() {
            return il2cpp::create_object<app::WeaponMasterIdle_c>(get_class());
        }
    } // namespace WeaponMasterIdle_c
} // namespace app::classes::types
