#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceScaleModifier__Class** type_info;
        inline app::TurbulenceScaleModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceScaleModifier__Class>(type_info, "", "TurbulenceScaleModifier");
        }
        inline app::TurbulenceScaleModifier* create() {
            return il2cpp::create_object<app::TurbulenceScaleModifier>(get_class());
        }
    } // namespace TurbulenceScaleModifier
} // namespace app::classes::types
