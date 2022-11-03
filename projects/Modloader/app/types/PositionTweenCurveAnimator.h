#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionTweenCurveAnimator {
        inline app::PositionTweenCurveAnimator__Class** type_info = (app::PositionTweenCurveAnimator__Class**)(modloader::win::memory::resolve_rva(0x04739878));
        inline app::PositionTweenCurveAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenCurveAnimator__Class>(type_info, "Moon.Timeline", "PositionTweenCurveAnimator");
        }
        inline app::PositionTweenCurveAnimator* create() {
            return il2cpp::create_object<app::PositionTweenCurveAnimator>(get_class());
        }
    } // namespace PositionTweenCurveAnimator
} // namespace app::classes::types
