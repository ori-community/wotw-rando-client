#pragma once
#include <Modloader/app/structs/AttackableSwitch.h>
#include <Modloader/app/structs/AttackableSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitch {
        inline app::AttackableSwitch__Class** type_info() {
            static app::AttackableSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackableSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackableSwitch__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitch__Class>(type_info(), "", "AttackableSwitch");
        }
        inline app::AttackableSwitch* create() {
            return il2cpp::create_object<app::AttackableSwitch>(get_class());
        }
    } // namespace AttackableSwitch
} // namespace app::classes::types
