#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinAttribute_1 {
        namespace {
            app::MinAttribute_1__Class* type_info_ref = nullptr;
        }
        app::MinAttribute_1__Class** type_info = &type_info_ref;
        inline app::MinAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MinAttribute_1__Class>(type_info, "UnityStandardAssets.CinematicEffects", "MinAttribute");
        }
        inline app::MinAttribute_1* create() {
            return il2cpp::create_object<app::MinAttribute_1>(get_class());
        }
    } // namespace MinAttribute_1
} // namespace app::classes::types
