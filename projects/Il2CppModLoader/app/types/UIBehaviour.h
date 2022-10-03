#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIBehaviour {
        namespace {
            app::UIBehaviour__Class* type_info_ref = nullptr;
        }
        app::UIBehaviour__Class** type_info = &type_info_ref;
        inline app::UIBehaviour__Class* get_class() {
            return il2cpp::get_class<app::UIBehaviour__Class>(type_info, "UnityEngine.EventSystems", "UIBehaviour");
        }
        inline app::UIBehaviour* create() {
            return il2cpp::create_object<app::UIBehaviour>(get_class());
        }
    } // namespace UIBehaviour
} // namespace app::classes::types
