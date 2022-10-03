#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData_AnimationData__Array {
        namespace {
            app::AnimationMetaData_AnimationData__Array__Class* type_info_ref = nullptr;
        }
        app::AnimationMetaData_AnimationData__Array__Class** type_info = &type_info_ref;
        inline app::AnimationMetaData_AnimationData__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaData_AnimationData__Array__Class>(type_info, "", "AnimationMetaData+AnimationData[]");
        }
        inline app::AnimationMetaData_AnimationData__Array* create() {
            return il2cpp::create_object<app::AnimationMetaData_AnimationData__Array>(get_class());
        }
    } // namespace AnimationMetaData_AnimationData__Array
} // namespace app::classes::types
