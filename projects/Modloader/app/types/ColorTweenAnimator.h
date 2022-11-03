#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorTweenAnimator {
        inline app::ColorTweenAnimator__Class** type_info = (app::ColorTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04738060));
        inline app::ColorTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorTweenAnimator__Class>(type_info, "Moon.Timeline", "ColorTweenAnimator");
        }
        inline app::ColorTweenAnimator* create() {
            return il2cpp::create_object<app::ColorTweenAnimator>(get_class());
        }
    } // namespace ColorTweenAnimator
} // namespace app::classes::types
