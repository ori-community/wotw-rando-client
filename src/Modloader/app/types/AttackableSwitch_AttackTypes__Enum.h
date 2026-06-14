#pragma once
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum.h>
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum__Array.h>
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitch_AttackTypes__Enum {
        inline app::AttackableSwitch_AttackTypes__Enum__Class** type_info() {
            static app::AttackableSwitch_AttackTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackableSwitch_AttackTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackableSwitch_AttackTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableSwitch_AttackTypes__Enum__Class>(type_info(), "", "AttackableSwitch", "AttackTypes");
        }
        inline app::AttackableSwitch_AttackTypes__Enum* create() {
            return il2cpp::create_object<app::AttackableSwitch_AttackTypes__Enum>(get_class());
        }
        inline app::AttackableSwitch_AttackTypes__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackableSwitch_AttackTypes__Enum__Array>(get_class(), size);
        }
        inline app::AttackableSwitch_AttackTypes__Enum__Array* create_array(const std::vector<app::AttackableSwitch_AttackTypes__Enum*>& items) {
            return il2cpp::array_new<app::AttackableSwitch_AttackTypes__Enum__Array>(get_class(), items);
        }
    } // namespace AttackableSwitch_AttackTypes__Enum
} // namespace app::classes::types
