#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUIComponent {
        namespace {
            app::IUIComponent__Class* type_info_ref = nullptr;
        }
        app::IUIComponent__Class** type_info = &type_info_ref;
        inline app::IUIComponent__Class* get_class() {
            return il2cpp::get_class<app::IUIComponent__Class>(type_info, "Moon.UI", "IUIComponent");
        }
        inline app::IUIComponent* create() {
            return il2cpp::create_object<app::IUIComponent>(get_class());
        }
    } // namespace IUIComponent
} // namespace app::classes::types
