#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImplicitUseTargetFlags__Enum {
        namespace {
            app::ImplicitUseTargetFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::ImplicitUseTargetFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ImplicitUseTargetFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImplicitUseTargetFlags__Enum__Class>(type_info, "JetBrains.Annotations", "ImplicitUseTargetFlags");
        }
        inline app::ImplicitUseTargetFlags__Enum* create() {
            return il2cpp::create_object<app::ImplicitUseTargetFlags__Enum>(get_class());
        }
    } // namespace ImplicitUseTargetFlags__Enum
} // namespace app::classes::types
