#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceRotationModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceRotationModifier__Class** type_info;
        inline app::TurbulenceRotationModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceRotationModifier__Class>(type_info, "", "TurbulenceRotationModifier");
        }
        inline app::TurbulenceRotationModifier* create() {
            return il2cpp::create_object<app::TurbulenceRotationModifier>(get_class());
        }
    } // namespace TurbulenceRotationModifier
} // namespace app::classes::types
