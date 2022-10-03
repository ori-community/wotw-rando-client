#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GradientRemapModifier {
        namespace {
            app::GradientRemapModifier__Class* type_info_ref = nullptr;
        }
        app::GradientRemapModifier__Class** type_info = &type_info_ref;
        inline app::GradientRemapModifier__Class* get_class() {
            return il2cpp::get_class<app::GradientRemapModifier__Class>(type_info, "", "GradientRemapModifier");
        }
        inline app::GradientRemapModifier* create() {
            return il2cpp::create_object<app::GradientRemapModifier>(get_class());
        }
    } // namespace GradientRemapModifier
} // namespace app::classes::types
