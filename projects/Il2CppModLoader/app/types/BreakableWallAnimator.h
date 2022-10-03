#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakableWallAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BreakableWallAnimator__Class** type_info;
        inline app::BreakableWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::BreakableWallAnimator__Class>(type_info, "", "BreakableWallAnimator");
        }
        inline app::BreakableWallAnimator* create() {
            return il2cpp::create_object<app::BreakableWallAnimator>(get_class());
        }
    } // namespace BreakableWallAnimator
} // namespace app::classes::types
