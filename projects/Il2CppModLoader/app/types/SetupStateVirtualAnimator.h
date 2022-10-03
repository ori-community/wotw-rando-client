#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupStateVirtualAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetupStateVirtualAnimator__Class** type_info;
        inline app::SetupStateVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::SetupStateVirtualAnimator__Class>(type_info, "", "SetupStateVirtualAnimator");
        }
        inline app::SetupStateVirtualAnimator* create() {
            return il2cpp::create_object<app::SetupStateVirtualAnimator>(get_class());
        }
    } // namespace SetupStateVirtualAnimator
} // namespace app::classes::types
