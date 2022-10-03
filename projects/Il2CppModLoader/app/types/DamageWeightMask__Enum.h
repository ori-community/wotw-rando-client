#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageWeightMask__Enum {
        namespace {
            app::DamageWeightMask__Enum__Class* type_info_ref = nullptr;
        }
        app::DamageWeightMask__Enum__Class** type_info = &type_info_ref;
        inline app::DamageWeightMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageWeightMask__Enum__Class>(type_info, "", "DamageWeightMask");
        }
        inline app::DamageWeightMask__Enum* create() {
            return il2cpp::create_object<app::DamageWeightMask__Enum>(get_class());
        }
    } // namespace DamageWeightMask__Enum
} // namespace app::classes::types
