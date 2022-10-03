#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandTrailModifier {
        namespace {
            app::SandTrailModifier__Class* type_info_ref = nullptr;
        }
        app::SandTrailModifier__Class** type_info = &type_info_ref;
        inline app::SandTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::SandTrailModifier__Class>(type_info, "", "SandTrailModifier");
        }
        inline app::SandTrailModifier* create() {
            return il2cpp::create_object<app::SandTrailModifier>(get_class());
        }
    } // namespace SandTrailModifier
} // namespace app::classes::types
