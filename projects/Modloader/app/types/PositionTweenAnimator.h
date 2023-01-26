#pragma once
#include <Modloader/app/structs/PositionTweenAnimator.h>
#include <Modloader/app/structs/PositionTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionTweenAnimator {
        inline app::PositionTweenAnimator__Class** type_info() {
            static app::PositionTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PositionTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476BDC0));
            }
            return cache;
        }
        inline app::PositionTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenAnimator__Class>(type_info(), "Moon.Timeline", "PositionTweenAnimator");
        }
        inline app::PositionTweenAnimator* create() {
            return il2cpp::create_object<app::PositionTweenAnimator>(get_class());
        }
    } // namespace PositionTweenAnimator
} // namespace app::classes::types
