#pragma once
#include <Modloader/app/structs/Damage_DamageEffectPositionMode__Enum.h>
#include <Modloader/app/structs/Damage_DamageEffectPositionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Damage_DamageEffectPositionMode__Enum {
        inline app::Damage_DamageEffectPositionMode__Enum__Class** type_info() {
            static app::Damage_DamageEffectPositionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Damage_DamageEffectPositionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Damage_DamageEffectPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Damage_DamageEffectPositionMode__Enum__Class>(type_info(), "", "Damage", "DamageEffectPositionMode");
        }
        inline app::Damage_DamageEffectPositionMode__Enum* create() {
            return il2cpp::create_object<app::Damage_DamageEffectPositionMode__Enum>(get_class());
        }
    } // namespace Damage_DamageEffectPositionMode__Enum
} // namespace app::classes::types
