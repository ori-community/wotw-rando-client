#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_BlendInstance {
        namespace {
            app::MoonAnimator_BlendInstance__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_BlendInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_BlendInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_BlendInstance__Class>(type_info, "Moon", "MoonAnimator", "BlendInstance");
        }
        inline app::MoonAnimator_BlendInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_BlendInstance>(get_class());
        }
        inline app::MoonAnimator_BlendInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_BlendInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_BlendInstance__Array* create_array(const std::vector<app::MoonAnimator_BlendInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_BlendInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_BlendInstance
} // namespace app::classes::types
