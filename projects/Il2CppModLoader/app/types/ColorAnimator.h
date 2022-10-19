#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorAnimator {
        inline app::ColorAnimator__Class** type_info = (app::ColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473C188));
        inline app::ColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimator__Class>(type_info, "Moon.Timeline", "ColorAnimator");
        }
        inline app::ColorAnimator* create() {
            return il2cpp::create_object<app::ColorAnimator>(get_class());
        }
    } // namespace ColorAnimator
} // namespace app::classes::types
