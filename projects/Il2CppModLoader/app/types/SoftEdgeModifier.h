#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoftEdgeModifier {
        namespace {
            app::SoftEdgeModifier__Class* type_info_ref = nullptr;
        }
        app::SoftEdgeModifier__Class** type_info = &type_info_ref;
        inline app::SoftEdgeModifier__Class* get_class() {
            return il2cpp::get_class<app::SoftEdgeModifier__Class>(type_info, "", "SoftEdgeModifier");
        }
        inline app::SoftEdgeModifier* create() {
            return il2cpp::create_object<app::SoftEdgeModifier>(get_class());
        }
    } // namespace SoftEdgeModifier
} // namespace app::classes::types
