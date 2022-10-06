#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimatorPostprocessData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_AnimatorPostprocessData__Class** type_info;
        inline app::MoonAnimator_AnimatorPostprocessData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimatorPostprocessData__Class>(type_info, "Moon", "MoonAnimator", "AnimatorPostprocessData");
        }
        inline app::MoonAnimator_AnimatorPostprocessData* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimatorPostprocessData>(get_class());
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Boxed* box(app::MoonAnimator_AnimatorPostprocessData value) {
            return il2cpp::box_value<app::MoonAnimator_AnimatorPostprocessData__Boxed>(get_class(), value);
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimatorPostprocessData__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Array* create_array(const std::vector<app::MoonAnimator_AnimatorPostprocessData__Boxed>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimatorPostprocessData__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimatorPostprocessData
} // namespace app::classes::types
