#pragma once
#include <Modloader/app/structs/DamagerAnimator_DamagerShape__Enum.h>
#include <Modloader/app/structs/DamagerAnimator_DamagerShape__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamagerAnimator_DamagerShape__Enum {
        inline app::DamagerAnimator_DamagerShape__Enum__Class** type_info() {
            static app::DamagerAnimator_DamagerShape__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamagerAnimator_DamagerShape__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamagerAnimator_DamagerShape__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamagerAnimator_DamagerShape__Enum__Class>(type_info(), "", "DamagerAnimator", "DamagerShape");
        }
        inline app::DamagerAnimator_DamagerShape__Enum* create() {
            return il2cpp::create_object<app::DamagerAnimator_DamagerShape__Enum>(get_class());
        }
    } // namespace DamagerAnimator_DamagerShape__Enum
} // namespace app::classes::types
