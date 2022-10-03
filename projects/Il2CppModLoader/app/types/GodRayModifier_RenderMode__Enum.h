#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier_RenderMode__Enum {
        namespace {
            app::GodRayModifier_RenderMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GodRayModifier_RenderMode__Enum__Class** type_info = &type_info_ref;
        inline app::GodRayModifier_RenderMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GodRayModifier_RenderMode__Enum__Class>(type_info, "", "GodRayModifier", "RenderMode");
        }
        inline app::GodRayModifier_RenderMode__Enum* create() {
            return il2cpp::create_object<app::GodRayModifier_RenderMode__Enum>(get_class());
        }
    } // namespace GodRayModifier_RenderMode__Enum
} // namespace app::classes::types
