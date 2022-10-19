#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_TransformData {
        inline app::MoonAnimator_TransformData__Class** type_info = (app::MoonAnimator_TransformData__Class**)(modloader::win::memory::resolve_rva(0x047010E0));
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
        inline app::MoonAnimator_TransformData__Array* create_array(const std::vector<app::MoonAnimator_TransformData>& items) {
            return il2cpp::array_new<app::MoonAnimator_TransformData__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_TransformData
} // namespace app::classes::types
