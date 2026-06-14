#pragma once
#include <Modloader/app/structs/UberExplosionAnimator_ExplosionType__Enum.h>
#include <Modloader/app/structs/UberExplosionAnimator_ExplosionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberExplosionAnimator_ExplosionType__Enum {
        inline app::UberExplosionAnimator_ExplosionType__Enum__Class** type_info() {
            static app::UberExplosionAnimator_ExplosionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberExplosionAnimator_ExplosionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberExplosionAnimator_ExplosionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberExplosionAnimator_ExplosionType__Enum__Class>(type_info(), "", "UberExplosionAnimator", "ExplosionType");
        }
        inline app::UberExplosionAnimator_ExplosionType__Enum* create() {
            return il2cpp::create_object<app::UberExplosionAnimator_ExplosionType__Enum>(get_class());
        }
    } // namespace UberExplosionAnimator_ExplosionType__Enum
} // namespace app::classes::types
