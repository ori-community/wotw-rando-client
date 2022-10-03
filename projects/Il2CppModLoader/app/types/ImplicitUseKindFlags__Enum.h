#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImplicitUseKindFlags__Enum {
        namespace {
            app::ImplicitUseKindFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::ImplicitUseKindFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ImplicitUseKindFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImplicitUseKindFlags__Enum__Class>(type_info, "JetBrains.Annotations", "ImplicitUseKindFlags");
        }
        inline app::ImplicitUseKindFlags__Enum* create() {
            return il2cpp::create_object<app::ImplicitUseKindFlags__Enum>(get_class());
        }
    } // namespace ImplicitUseKindFlags__Enum
} // namespace app::classes::types
