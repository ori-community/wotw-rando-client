#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTextureSettingsAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberTextureSettingsAnimator__Class** type_info;
        inline app::UberTextureSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberTextureSettingsAnimator__Class>(type_info, "", "UberTextureSettingsAnimator");
        }
        inline app::UberTextureSettingsAnimator* create() {
            return il2cpp::create_object<app::UberTextureSettingsAnimator>(get_class());
        }
    } // namespace UberTextureSettingsAnimator
} // namespace app::classes::types
