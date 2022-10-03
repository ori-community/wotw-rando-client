#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialTransparencyAnimator {
        namespace {
            app::LegacyMaterialTransparencyAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyMaterialTransparencyAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialTransparencyAnimator__Class>(type_info, "", "LegacyMaterialTransparencyAnimator");
        }
        inline app::LegacyMaterialTransparencyAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialTransparencyAnimator>(get_class());
        }
    } // namespace LegacyMaterialTransparencyAnimator
} // namespace app::classes::types
