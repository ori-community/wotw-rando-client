#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanvasUpdate__Enum {
        namespace {
            app::CanvasUpdate__Enum__Class* type_info_ref = nullptr;
        }
        app::CanvasUpdate__Enum__Class** type_info = &type_info_ref;
        inline app::CanvasUpdate__Enum__Class* get_class() {
            return il2cpp::get_class<app::CanvasUpdate__Enum__Class>(type_info, "UnityEngine.UI", "CanvasUpdate");
        }
        inline app::CanvasUpdate__Enum* create() {
            return il2cpp::create_object<app::CanvasUpdate__Enum>(get_class());
        }
    } // namespace CanvasUpdate__Enum
} // namespace app::classes::types
