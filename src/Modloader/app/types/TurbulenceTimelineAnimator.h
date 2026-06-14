#pragma once
#include <Modloader/app/structs/TurbulenceTimelineAnimator.h>
#include <Modloader/app/structs/TurbulenceTimelineAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTimelineAnimator {
        inline app::TurbulenceTimelineAnimator__Class** type_info() {
            static app::TurbulenceTimelineAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceTimelineAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceTimelineAnimator__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTimelineAnimator__Class>(type_info(), "", "TurbulenceTimelineAnimator");
        }
        inline app::TurbulenceTimelineAnimator* create() {
            return il2cpp::create_object<app::TurbulenceTimelineAnimator>(get_class());
        }
    } // namespace TurbulenceTimelineAnimator
} // namespace app::classes::types
