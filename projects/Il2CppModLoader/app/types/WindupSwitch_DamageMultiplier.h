#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindupSwitch_DamageMultiplier {
        namespace {
            app::WindupSwitch_DamageMultiplier__Class* type_info_ref = nullptr;
        }
        app::WindupSwitch_DamageMultiplier__Class** type_info = &type_info_ref;
        inline app::WindupSwitch_DamageMultiplier__Class* get_class() {
            return il2cpp::get_nested_class<app::WindupSwitch_DamageMultiplier__Class>(type_info, "", "WindupSwitch", "DamageMultiplier");
        }
        inline app::WindupSwitch_DamageMultiplier* create() {
            return il2cpp::create_object<app::WindupSwitch_DamageMultiplier>(get_class());
        }
        inline app::WindupSwitch_DamageMultiplier__Array* create_array(int size) {
            return il2cpp::array_new<app::WindupSwitch_DamageMultiplier__Array>(get_class(), size);
        }
        inline app::WindupSwitch_DamageMultiplier__Array* create_array(const std::vector<app::WindupSwitch_DamageMultiplier*>& items) {
            return il2cpp::array_new<app::WindupSwitch_DamageMultiplier__Array>(get_class(), items);
        }
    } // namespace WindupSwitch_DamageMultiplier
} // namespace app::classes::types
