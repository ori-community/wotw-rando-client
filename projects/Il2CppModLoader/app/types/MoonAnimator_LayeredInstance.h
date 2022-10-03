#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_LayeredInstance {
        namespace {
            app::MoonAnimator_LayeredInstance__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_LayeredInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_LayeredInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_LayeredInstance__Class>(type_info, "Moon", "MoonAnimator", "LayeredInstance");
        }
        inline app::MoonAnimator_LayeredInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_LayeredInstance>(get_class());
        }
        inline app::MoonAnimator_LayeredInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_LayeredInstance__Array>(get_class(), size);
        }
    } // namespace MoonAnimator_LayeredInstance
} // namespace app::classes::types
