#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceDistortionModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceDistortionModifier__Class** type_info;
        inline app::TurbulenceDistortionModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceDistortionModifier__Class>(type_info, "", "TurbulenceDistortionModifier");
        }
        inline app::TurbulenceDistortionModifier* create() {
            return il2cpp::create_object<app::TurbulenceDistortionModifier>(get_class());
        }
    } // namespace TurbulenceDistortionModifier
} // namespace app::classes::types
