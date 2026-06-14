#pragma once
#include <Modloader/app/structs/SinMovement_Affect_AffectType__Enum.h>
#include <Modloader/app/structs/SinMovement_Affect_AffectType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SinMovement_Affect_AffectType__Enum {
        inline app::SinMovement_Affect_AffectType__Enum__Class** type_info() {
            static app::SinMovement_Affect_AffectType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SinMovement_Affect_AffectType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SinMovement_Affect_AffectType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SinMovement_Affect_AffectType__Enum__Class>(type_info(), "", "SinMovement+Affect", "AffectType");
        }
        inline app::SinMovement_Affect_AffectType__Enum* create() {
            return il2cpp::create_object<app::SinMovement_Affect_AffectType__Enum>(get_class());
        }
    } // namespace SinMovement_Affect_AffectType__Enum
} // namespace app::classes::types
