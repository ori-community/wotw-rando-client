#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TintModifier {
        namespace {
            app::TintModifier__Class* type_info_ref = nullptr;
        }
        app::TintModifier__Class** type_info = &type_info_ref;
        inline app::TintModifier__Class* get_class() {
            return il2cpp::get_class<app::TintModifier__Class>(type_info, "", "TintModifier");
        }
        inline app::TintModifier* create() {
            return il2cpp::create_object<app::TintModifier>(get_class());
        }
    } // namespace TintModifier
} // namespace app::classes::types
