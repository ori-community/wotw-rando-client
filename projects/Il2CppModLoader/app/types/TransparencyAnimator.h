#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparencyAnimator {
        inline app::TransparencyAnimator__Class** type_info = (app::TransparencyAnimator__Class**)(modloader::win::memory::resolve_rva(0x047706A8));
        inline app::TransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimator__Class>(type_info, "Moon.Timeline", "TransparencyAnimator");
        }
        inline app::TransparencyAnimator* create() {
            return il2cpp::create_object<app::TransparencyAnimator>(get_class());
        }
    } // namespace TransparencyAnimator
} // namespace app::classes::types
