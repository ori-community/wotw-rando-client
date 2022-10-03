#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinimalTrailModifier {
        namespace {
            app::MinimalTrailModifier__Class* type_info_ref = nullptr;
        }
        app::MinimalTrailModifier__Class** type_info = &type_info_ref;
        inline app::MinimalTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::MinimalTrailModifier__Class>(type_info, "", "MinimalTrailModifier");
        }
        inline app::MinimalTrailModifier* create() {
            return il2cpp::create_object<app::MinimalTrailModifier>(get_class());
        }
    } // namespace MinimalTrailModifier
} // namespace app::classes::types
