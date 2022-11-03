#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMetaDataDrivenTransform {
        namespace {
            inline app::AnimationMetaDataDrivenTransform__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMetaDataDrivenTransform__Class** type_info = &type_info_ref;
        inline app::AnimationMetaDataDrivenTransform__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataDrivenTransform__Class>(type_info, "", "AnimationMetaDataDrivenTransform");
        }
        inline app::AnimationMetaDataDrivenTransform* create() {
            return il2cpp::create_object<app::AnimationMetaDataDrivenTransform>(get_class());
        }
    } // namespace AnimationMetaDataDrivenTransform
} // namespace app::classes::types
