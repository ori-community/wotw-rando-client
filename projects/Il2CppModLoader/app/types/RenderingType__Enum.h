#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderingType__Enum {
        namespace {
            app::RenderingType__Enum__Class* type_info_ref = nullptr;
        }
        app::RenderingType__Enum__Class** type_info = &type_info_ref;
        inline app::RenderingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderingType__Enum__Class>(type_info, "Moon.VisualDebug", "RenderingType");
        }
        inline app::RenderingType__Enum* create() {
            return il2cpp::create_object<app::RenderingType__Enum>(get_class());
        }
    } // namespace RenderingType__Enum
} // namespace app::classes::types
