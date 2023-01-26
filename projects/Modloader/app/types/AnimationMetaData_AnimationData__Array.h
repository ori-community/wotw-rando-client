#pragma once
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Array.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData_AnimationData__Array {
        inline app::AnimationMetaData_AnimationData__Array__Class** type_info() {
            static app::AnimationMetaData_AnimationData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMetaData_AnimationData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMetaData_AnimationData__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaData_AnimationData__Array__Class>(type_info(), "", "AnimationMetaData+AnimationData[]");
        }
        inline app::AnimationMetaData_AnimationData__Array* create() {
            return il2cpp::create_object<app::AnimationMetaData_AnimationData__Array>(get_class());
        }
    } // namespace AnimationMetaData_AnimationData__Array
} // namespace app::classes::types
