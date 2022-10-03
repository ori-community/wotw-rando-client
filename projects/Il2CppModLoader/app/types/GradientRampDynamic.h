#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GradientRampDynamic {
        namespace {
            app::GradientRampDynamic__Class* type_info_ref = nullptr;
        }
        app::GradientRampDynamic__Class** type_info = &type_info_ref;
        inline app::GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::GradientRampDynamic__Class>(type_info, "Colorful", "GradientRampDynamic");
        }
        inline app::GradientRampDynamic* create() {
            return il2cpp::create_object<app::GradientRampDynamic>(get_class());
        }
    } // namespace GradientRampDynamic
} // namespace app::classes::types
