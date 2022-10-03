#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GodRayMaskModifier {
        namespace {
            app::GodRayMaskModifier__Class* type_info_ref = nullptr;
        }
        app::GodRayMaskModifier__Class** type_info = &type_info_ref;
        inline app::GodRayMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::GodRayMaskModifier__Class>(type_info, "", "GodRayMaskModifier");
        }
        inline app::GodRayMaskModifier* create() {
            return il2cpp::create_object<app::GodRayMaskModifier>(get_class());
        }
    } // namespace GodRayMaskModifier
} // namespace app::classes::types
