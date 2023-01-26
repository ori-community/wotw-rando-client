#pragma once
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform.h>
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataDrivenTransform {
        inline app::AnimationMetaDataDrivenTransform__Class** type_info() {
            static app::AnimationMetaDataDrivenTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMetaDataDrivenTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMetaDataDrivenTransform__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataDrivenTransform__Class>(type_info(), "", "AnimationMetaDataDrivenTransform");
        }
        inline app::AnimationMetaDataDrivenTransform* create() {
            return il2cpp::create_object<app::AnimationMetaDataDrivenTransform>(get_class());
        }
    } // namespace AnimationMetaDataDrivenTransform
} // namespace app::classes::types
