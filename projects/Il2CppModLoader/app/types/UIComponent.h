#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIComponent {
        namespace {
            app::UIComponent__Class* type_info_ref = nullptr;
        }
        app::UIComponent__Class** type_info = &type_info_ref;
        inline app::UIComponent__Class* get_class() {
            return il2cpp::get_class<app::UIComponent__Class>(type_info, "Moon.UI", "UIComponent");
        }
        inline app::UIComponent* create() {
            return il2cpp::create_object<app::UIComponent>(get_class());
        }
        inline app::UIComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UIComponent__Array>(get_class(), size);
        }
    } // namespace UIComponent
} // namespace app::classes::types
