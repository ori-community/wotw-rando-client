#pragma once
#include <Modloader/app/structs/AttackableSwitch_c.h>
#include <Modloader/app/structs/AttackableSwitch_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitch_c {
        inline app::AttackableSwitch_c__Class** type_info() {
            static app::AttackableSwitch_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttackableSwitch_c__Class**)(modloader::win::memory::resolve_rva(0x0478D2B8));
            }
            return cache;
        }
        inline app::AttackableSwitch_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableSwitch_c__Class>(type_info(), "", "AttackableSwitch", "<>c");
        }
        inline app::AttackableSwitch_c* create() {
            return il2cpp::create_object<app::AttackableSwitch_c>(get_class());
        }
    } // namespace AttackableSwitch_c
} // namespace app::classes::types
