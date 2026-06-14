#pragma once
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum__Array.h>
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitch_AttackTypes__Enum__Array {
        inline app::AttackableSwitch_AttackTypes__Enum__Array__Class** type_info() {
            static app::AttackableSwitch_AttackTypes__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackableSwitch_AttackTypes__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackableSwitch_AttackTypes__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitch_AttackTypes__Enum__Array__Class>(type_info(), "", "AttackableSwitch+AttackTypes[]");
        }
        inline app::AttackableSwitch_AttackTypes__Enum__Array* create() {
            return il2cpp::create_object<app::AttackableSwitch_AttackTypes__Enum__Array>(get_class());
        }
    } // namespace AttackableSwitch_AttackTypes__Enum__Array
} // namespace app::classes::types
