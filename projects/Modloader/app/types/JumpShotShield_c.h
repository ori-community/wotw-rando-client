#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShotShield_c {
        inline app::JumpShotShield_c__Class** type_info = (app::JumpShotShield_c__Class**)(modloader::win::memory::resolve_rva(0x0476CAF0));
        inline app::JumpShotShield_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShotShield_c__Class>(type_info, "", "JumpShotShield", "<>c");
        }
        inline app::JumpShotShield_c* create() {
            return il2cpp::create_object<app::JumpShotShield_c>(get_class());
        }
    } // namespace JumpShotShield_c
} // namespace app::classes::types
