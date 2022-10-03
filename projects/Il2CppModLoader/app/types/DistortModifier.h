#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistortModifier {
        namespace {
            app::DistortModifier__Class* type_info_ref = nullptr;
        }
        app::DistortModifier__Class** type_info = &type_info_ref;
        inline app::DistortModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortModifier__Class>(type_info, "", "DistortModifier");
        }
        inline app::DistortModifier* create() {
            return il2cpp::create_object<app::DistortModifier>(get_class());
        }
    } // namespace DistortModifier
} // namespace app::classes::types
