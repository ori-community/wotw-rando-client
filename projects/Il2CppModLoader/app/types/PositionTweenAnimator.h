#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionTweenAnimator {
        inline app::PositionTweenAnimator__Class** type_info = (app::PositionTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476BDC0));
        inline app::PositionTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenAnimator__Class>(type_info, "Moon.Timeline", "PositionTweenAnimator");
        }
        inline app::PositionTweenAnimator* create() {
            return il2cpp::create_object<app::PositionTweenAnimator>(get_class());
        }
    } // namespace PositionTweenAnimator
} // namespace app::classes::types
