#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparancyAnimatorModifier {
        namespace {
            app::TransparancyAnimatorModifier__Class* type_info_ref = nullptr;
        }
        app::TransparancyAnimatorModifier__Class** type_info = &type_info_ref;
        inline app::TransparancyAnimatorModifier__Class* get_class() {
            return il2cpp::get_class<app::TransparancyAnimatorModifier__Class>(type_info, "", "TransparancyAnimatorModifier");
        }
        inline app::TransparancyAnimatorModifier* create() {
            return il2cpp::create_object<app::TransparancyAnimatorModifier>(get_class());
        }
    } // namespace TransparancyAnimatorModifier
} // namespace app::classes::types
