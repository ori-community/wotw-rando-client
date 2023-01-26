#pragma once
#include <Modloader/app/structs/DamagerAnimator_DirectionType__Enum.h>
#include <Modloader/app/structs/DamagerAnimator_DirectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamagerAnimator_DirectionType__Enum {
        inline app::DamagerAnimator_DirectionType__Enum__Class** type_info() {
            static app::DamagerAnimator_DirectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamagerAnimator_DirectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamagerAnimator_DirectionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamagerAnimator_DirectionType__Enum__Class>(type_info(), "", "DamagerAnimator", "DirectionType");
        }
        inline app::DamagerAnimator_DirectionType__Enum* create() {
            return il2cpp::create_object<app::DamagerAnimator_DirectionType__Enum>(get_class());
        }
    } // namespace DamagerAnimator_DirectionType__Enum
} // namespace app::classes::types
