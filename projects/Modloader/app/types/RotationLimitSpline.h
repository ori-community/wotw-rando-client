#pragma once
#include <Modloader/app/structs/RotationLimitSpline.h>
#include <Modloader/app/structs/RotationLimitSpline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitSpline {
        inline app::RotationLimitSpline__Class** type_info() {
            static app::RotationLimitSpline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationLimitSpline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationLimitSpline__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitSpline__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitSpline");
        }
        inline app::RotationLimitSpline* create() {
            return il2cpp::create_object<app::RotationLimitSpline>(get_class());
        }
    } // namespace RotationLimitSpline
} // namespace app::classes::types
