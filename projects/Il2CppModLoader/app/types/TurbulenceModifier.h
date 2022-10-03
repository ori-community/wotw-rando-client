#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceModifier {
        namespace {
            app::TurbulenceModifier__Class* type_info_ref = nullptr;
        }
        app::TurbulenceModifier__Class** type_info = &type_info_ref;
        inline app::TurbulenceModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceModifier__Class>(type_info, "", "TurbulenceModifier");
        }
        inline app::TurbulenceModifier* create() {
            return il2cpp::create_object<app::TurbulenceModifier>(get_class());
        }
    } // namespace TurbulenceModifier
} // namespace app::classes::types
