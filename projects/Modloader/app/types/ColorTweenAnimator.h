#pragma once
#include <Modloader/app/structs/ColorTweenAnimator.h>
#include <Modloader/app/structs/ColorTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorTweenAnimator {
        inline app::ColorTweenAnimator__Class** type_info() {
            static app::ColorTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04738060));
            }
            return cache;
        }
        inline app::ColorTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorTweenAnimator__Class>(type_info(), "Moon.Timeline", "ColorTweenAnimator");
        }
        inline app::ColorTweenAnimator* create() {
            return il2cpp::create_object<app::ColorTweenAnimator>(get_class());
        }
    } // namespace ColorTweenAnimator
} // namespace app::classes::types
