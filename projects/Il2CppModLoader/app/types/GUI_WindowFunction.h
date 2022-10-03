#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUI_WindowFunction {
        namespace {
            app::GUI_WindowFunction__Class* type_info_ref = nullptr;
        }
        app::GUI_WindowFunction__Class** type_info = &type_info_ref;
        inline app::GUI_WindowFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::GUI_WindowFunction__Class>(type_info, "UnityEngine", "GUI", "WindowFunction");
        }
        inline app::GUI_WindowFunction* create() {
            return il2cpp::create_object<app::GUI_WindowFunction>(get_class());
        }
    } // namespace GUI_WindowFunction
} // namespace app::classes::types
