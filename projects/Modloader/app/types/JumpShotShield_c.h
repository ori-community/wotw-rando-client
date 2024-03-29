#pragma once
#include <Modloader/app/structs/JumpShotShield_c.h>
#include <Modloader/app/structs/JumpShotShield_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShotShield_c {
        inline app::JumpShotShield_c__Class** type_info() {
            static app::JumpShotShield_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumpShotShield_c__Class**)(modloader::win::memory::resolve_rva(0x0476CAF0));
            }
            return cache;
        }
        inline app::JumpShotShield_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShotShield_c__Class>(type_info(), "", "JumpShotShield", "<>c");
        }
        inline app::JumpShotShield_c* create() {
            return il2cpp::create_object<app::JumpShotShield_c>(get_class());
        }
    } // namespace JumpShotShield_c
} // namespace app::classes::types
