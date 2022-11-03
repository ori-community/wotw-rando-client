#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAttackableSwitch_AttackTypes__Enum {
        namespace {
            inline app::LegacyAttackableSwitch_AttackTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAttackableSwitch_AttackTypes__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyAttackableSwitch_AttackTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyAttackableSwitch_AttackTypes__Enum__Class>(type_info, "", "LegacyAttackableSwitch", "AttackTypes");
        }
        inline app::LegacyAttackableSwitch_AttackTypes__Enum* create() {
            return il2cpp::create_object<app::LegacyAttackableSwitch_AttackTypes__Enum>(get_class());
        }
        inline app::LegacyAttackableSwitch_AttackTypes__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyAttackableSwitch_AttackTypes__Enum__Array>(get_class(), size);
        }
        inline app::LegacyAttackableSwitch_AttackTypes__Enum__Array* create_array(const std::vector<app::LegacyAttackableSwitch_AttackTypes__Enum*>& items) {
            return il2cpp::array_new<app::LegacyAttackableSwitch_AttackTypes__Enum__Array>(get_class(), items);
        }
    } // namespace LegacyAttackableSwitch_AttackTypes__Enum
} // namespace app::classes::types
