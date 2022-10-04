#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonSetupAnimator__Class** type_info;
        inline app::IMoonSetupAnimator__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupAnimator__Class>(type_info, "", "IMoonSetupAnimator");
        }
        inline app::IMoonSetupAnimator* create() {
            return il2cpp::create_object<app::IMoonSetupAnimator>(get_class());
        }
    } // namespace IMoonSetupAnimator
} // namespace app::classes::types
