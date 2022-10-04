#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateModifierDataVirtualAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateModifierDataVirtualAnimator__Class** type_info;
        inline app::IUberStateModifierDataVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::IUberStateModifierDataVirtualAnimator__Class>(type_info, "", "IUberStateModifierDataVirtualAnimator");
        }
        inline app::IUberStateModifierDataVirtualAnimator* create() {
            return il2cpp::create_object<app::IUberStateModifierDataVirtualAnimator>(get_class());
        }
    } // namespace IUberStateModifierDataVirtualAnimator
} // namespace app::classes::types
