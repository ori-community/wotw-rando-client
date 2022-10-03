#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_TransformData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_TransformData__Class** type_info;
        inline app::MoonAnimator_TransformData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_TransformData__Class>(type_info, "Moon", "MoonAnimator", "TransformData");
        }
        inline app::MoonAnimator_TransformData* create() {
            return il2cpp::create_object<app::MoonAnimator_TransformData>(get_class());
        }
        inline app::MoonAnimator_TransformData__Boxed* box(app::MoonAnimator_TransformData value) {
            return il2cpp::box_value<app::MoonAnimator_TransformData__Boxed>(get_class(), value);
        }
        inline app::MoonAnimator_TransformData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_TransformData__Array>(get_class(), size);
        }
    } // namespace MoonAnimator_TransformData
} // namespace app::classes::types
