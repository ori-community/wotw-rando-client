#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindupSwitch_DamageMultiplier__Array {
        namespace {
            inline app::WindupSwitch_DamageMultiplier__Array__Class* type_info_ref = nullptr;
        }
        inline app::WindupSwitch_DamageMultiplier__Array__Class** type_info = &type_info_ref;
        inline app::WindupSwitch_DamageMultiplier__Array__Class* get_class() {
            return il2cpp::get_class<app::WindupSwitch_DamageMultiplier__Array__Class>(type_info, "", "WindupSwitch+DamageMultiplier[]");
        }
        inline app::WindupSwitch_DamageMultiplier__Array* create() {
            return il2cpp::create_object<app::WindupSwitch_DamageMultiplier__Array>(get_class());
        }
    } // namespace WindupSwitch_DamageMultiplier__Array
} // namespace app::classes::types
