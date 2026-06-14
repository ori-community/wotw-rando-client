#pragma once
#include <Modloader/app/structs/AnimationMontage_Entry__Array.h>
#include <Modloader/app/structs/AnimationMontage_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage_Entry__Array {
        inline app::AnimationMontage_Entry__Array__Class** type_info() {
            static app::AnimationMontage_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMontage_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMontage_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage_Entry__Array__Class>(type_info(), "Moon", "AnimationMontage+Entry[]");
        }
        inline app::AnimationMontage_Entry__Array* create() {
            return il2cpp::create_object<app::AnimationMontage_Entry__Array>(get_class());
        }
    } // namespace AnimationMontage_Entry__Array
} // namespace app::classes::types
