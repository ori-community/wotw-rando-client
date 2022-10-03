#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTransparencyAnimator__Class** type_info;
        inline app::LegacyTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparencyAnimator__Class>(type_info, "", "LegacyTransparencyAnimator");
        }
        inline app::LegacyTransparencyAnimator* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator>(get_class());
        }
        inline app::LegacyTransparencyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTransparencyAnimator__Array>(get_class(), size);
        }
    } // namespace LegacyTransparencyAnimator
} // namespace app::classes::types
