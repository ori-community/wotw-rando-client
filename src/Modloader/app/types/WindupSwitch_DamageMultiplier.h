#pragma once
#include <Modloader/app/structs/WindupSwitch_DamageMultiplier.h>
#include <Modloader/app/structs/WindupSwitch_DamageMultiplier__Array.h>
#include <Modloader/app/structs/WindupSwitch_DamageMultiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindupSwitch_DamageMultiplier {
        inline app::WindupSwitch_DamageMultiplier__Class** type_info() {
            static app::WindupSwitch_DamageMultiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindupSwitch_DamageMultiplier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindupSwitch_DamageMultiplier__Class* get_class() {
            return il2cpp::get_nested_class<app::WindupSwitch_DamageMultiplier__Class>(type_info(), "", "WindupSwitch", "DamageMultiplier");
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
