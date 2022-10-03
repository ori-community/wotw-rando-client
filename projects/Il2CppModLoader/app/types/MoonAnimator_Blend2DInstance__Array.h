#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_Blend2DInstance__Array {
        namespace {
            app::MoonAnimator_Blend2DInstance__Array__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_Blend2DInstance__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_Blend2DInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_Blend2DInstance__Array__Class>(type_info, "Moon", "MoonAnimator+Blend2DInstance[]");
        }
        inline app::MoonAnimator_Blend2DInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_Blend2DInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_Blend2DInstance__Array
} // namespace app::classes::types
