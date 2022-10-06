#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_Layer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_Layer__Class** type_info;
        inline app::MoonAnimator_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_Layer__Class>(type_info, "Moon", "MoonAnimator", "Layer");
        }
        inline app::MoonAnimator_Layer* create() {
            return il2cpp::create_object<app::MoonAnimator_Layer>(get_class());
        }
        inline app::MoonAnimator_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_Layer__Array>(get_class(), size);
        }
        inline app::MoonAnimator_Layer__Array* create_array(const std::vector<app::MoonAnimator_Layer*>& items) {
            return il2cpp::array_new<app::MoonAnimator_Layer__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_Layer
} // namespace app::classes::types
