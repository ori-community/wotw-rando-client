#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SnapTrapHookAnimator__Class** type_info;
        inline app::SnapTrapHookAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookAnimator__Class>(type_info, "", "SnapTrapHookAnimator");
        }
        inline app::SnapTrapHookAnimator* create() {
            return il2cpp::create_object<app::SnapTrapHookAnimator>(get_class());
        }
    } // namespace SnapTrapHookAnimator
} // namespace app::classes::types
