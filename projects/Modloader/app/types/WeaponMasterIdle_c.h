#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponMasterIdle_c__Class.h>
#include <Modloader/app/structs/WeaponMasterIdle_c.h>

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
