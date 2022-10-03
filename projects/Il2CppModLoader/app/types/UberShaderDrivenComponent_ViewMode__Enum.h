#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderDrivenComponent_ViewMode__Enum {
        namespace {
            app::UberShaderDrivenComponent_ViewMode__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderDrivenComponent_ViewMode__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderDrivenComponent_ViewMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderDrivenComponent_ViewMode__Enum__Class>(type_info, "Moon.UI", "UberShaderDrivenComponent", "ViewMode");
        }
        inline app::UberShaderDrivenComponent_ViewMode__Enum* create() {
            return il2cpp::create_object<app::UberShaderDrivenComponent_ViewMode__Enum>(get_class());
        }
    } // namespace UberShaderDrivenComponent_ViewMode__Enum
} // namespace app::classes::types
