#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIInteractable__Array {
        namespace {
            app::UIInteractable__Array__Class* type_info_ref = nullptr;
        }
        app::UIInteractable__Array__Class** type_info = &type_info_ref;
        inline app::UIInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::UIInteractable__Array__Class>(type_info, "Moon.UI", "UIInteractable[]");
        }
        inline app::UIInteractable__Array* create() {
            return il2cpp::create_object<app::UIInteractable__Array>(get_class());
        }
    } // namespace UIInteractable__Array
} // namespace app::classes::types
