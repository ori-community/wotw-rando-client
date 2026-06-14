#pragma once
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor.h>
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityModelAnimationCurveProcessor {
        inline app::UnityModelAnimationCurveProcessor__Class** type_info() {
            static app::UnityModelAnimationCurveProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityModelAnimationCurveProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityModelAnimationCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::UnityModelAnimationCurveProcessor__Class>(type_info(), "", "UnityModelAnimationCurveProcessor");
        }
        inline app::UnityModelAnimationCurveProcessor* create() {
            return il2cpp::create_object<app::UnityModelAnimationCurveProcessor>(get_class());
        }
    } // namespace UnityModelAnimationCurveProcessor
} // namespace app::classes::types
