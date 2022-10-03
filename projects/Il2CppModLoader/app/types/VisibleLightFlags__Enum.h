#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisibleLightFlags__Enum {
        namespace {
            app::VisibleLightFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::VisibleLightFlags__Enum__Class** type_info = &type_info_ref;
        inline app::VisibleLightFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::VisibleLightFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "VisibleLightFlags");
        }
        inline app::VisibleLightFlags__Enum* create() {
            return il2cpp::create_object<app::VisibleLightFlags__Enum>(get_class());
        }
    } // namespace VisibleLightFlags__Enum
} // namespace app::classes::types
