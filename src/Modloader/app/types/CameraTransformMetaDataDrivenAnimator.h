#pragma once
#include <Modloader/app/structs/CameraTransformMetaDataDrivenAnimator.h>
#include <Modloader/app/structs/CameraTransformMetaDataDrivenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTransformMetaDataDrivenAnimator {
        inline app::CameraTransformMetaDataDrivenAnimator__Class** type_info() {
            static app::CameraTransformMetaDataDrivenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraTransformMetaDataDrivenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraTransformMetaDataDrivenAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraTransformMetaDataDrivenAnimator__Class>(type_info(), "", "CameraTransformMetaDataDrivenAnimator");
        }
        inline app::CameraTransformMetaDataDrivenAnimator* create() {
            return il2cpp::create_object<app::CameraTransformMetaDataDrivenAnimator>(get_class());
        }
    } // namespace CameraTransformMetaDataDrivenAnimator
} // namespace app::classes::types
