#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FocusType__Enum {
        namespace {
            app::FocusType__Enum__Class* type_info_ref = nullptr;
        }
        app::FocusType__Enum__Class** type_info = &type_info_ref;
        inline app::FocusType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FocusType__Enum__Class>(type_info, "UnityEngine", "FocusType");
        }
        inline app::FocusType__Enum* create() {
            return il2cpp::create_object<app::FocusType__Enum>(get_class());
        }
    } // namespace FocusType__Enum
} // namespace app::classes::types
