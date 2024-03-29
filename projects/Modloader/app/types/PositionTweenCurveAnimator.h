#pragma once
#include <Modloader/app/structs/PositionTweenCurveAnimator.h>
#include <Modloader/app/structs/PositionTweenCurveAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionTweenCurveAnimator {
        inline app::PositionTweenCurveAnimator__Class** type_info() {
            static app::PositionTweenCurveAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PositionTweenCurveAnimator__Class**)(modloader::win::memory::resolve_rva(0x04739878));
            }
            return cache;
        }
        inline app::PositionTweenCurveAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenCurveAnimator__Class>(type_info(), "Moon.Timeline", "PositionTweenCurveAnimator");
        }
        inline app::PositionTweenCurveAnimator* create() {
            return il2cpp::create_object<app::PositionTweenCurveAnimator>(get_class());
        }
    } // namespace PositionTweenCurveAnimator
} // namespace app::classes::types
