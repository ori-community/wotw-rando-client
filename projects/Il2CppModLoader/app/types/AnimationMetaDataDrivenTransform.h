#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataDrivenTransform {
        namespace {
            app::AnimationMetaDataDrivenTransform__Class* type_info_ref = nullptr;
        }
        app::AnimationMetaDataDrivenTransform__Class** type_info = &type_info_ref;
        inline app::AnimationMetaDataDrivenTransform__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataDrivenTransform__Class>(type_info, "", "AnimationMetaDataDrivenTransform");
        }
        inline app::AnimationMetaDataDrivenTransform* create() {
            return il2cpp::create_object<app::AnimationMetaDataDrivenTransform>(get_class());
        }
    } // namespace AnimationMetaDataDrivenTransform
} // namespace app::classes::types
