#pragma once
#include <Modloader/app/structs/GUI_WindowFunction.h>
#include <Modloader/app/structs/GUI_WindowFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUI_WindowFunction {
        inline app::GUI_WindowFunction__Class** type_info() {
            static app::GUI_WindowFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUI_WindowFunction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUI_WindowFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::GUI_WindowFunction__Class>(type_info(), "UnityEngine", "GUI", "WindowFunction");
        }
        inline app::GUI_WindowFunction* create() {
            return il2cpp::create_object<app::GUI_WindowFunction>(get_class());
        }
    } // namespace GUI_WindowFunction
} // namespace app::classes::types
