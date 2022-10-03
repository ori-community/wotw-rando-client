#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTransparencyModifier {
        namespace {
            app::TurbulenceTransparencyModifier__Class* type_info_ref = nullptr;
        }
        app::TurbulenceTransparencyModifier__Class** type_info = &type_info_ref;
        inline app::TurbulenceTransparencyModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTransparencyModifier__Class>(type_info, "", "TurbulenceTransparencyModifier");
        }
        inline app::TurbulenceTransparencyModifier* create() {
            return il2cpp::create_object<app::TurbulenceTransparencyModifier>(get_class());
        }
    } // namespace TurbulenceTransparencyModifier
} // namespace app::classes::types
