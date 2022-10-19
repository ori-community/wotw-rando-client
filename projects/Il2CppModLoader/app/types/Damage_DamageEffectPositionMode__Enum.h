#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Damage_DamageEffectPositionMode__Enum {
        namespace {
            inline app::Damage_DamageEffectPositionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Damage_DamageEffectPositionMode__Enum__Class** type_info = &type_info_ref;
        inline app::Damage_DamageEffectPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Damage_DamageEffectPositionMode__Enum__Class>(type_info, "", "Damage", "DamageEffectPositionMode");
        }
        inline app::Damage_DamageEffectPositionMode__Enum* create() {
            return il2cpp::create_object<app::Damage_DamageEffectPositionMode__Enum>(get_class());
        }
    } // namespace Damage_DamageEffectPositionMode__Enum
} // namespace app::classes::types
