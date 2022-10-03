#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quality__Enum {
        namespace {
            app::Quality__Enum__Class* type_info_ref = nullptr;
        }
        app::Quality__Enum__Class** type_info = &type_info_ref;
        inline app::Quality__Enum__Class* get_class() {
            return il2cpp::get_class<app::Quality__Enum__Class>(type_info, "AmplifyColor", "Quality");
        }
        inline app::Quality__Enum* create() {
            return il2cpp::create_object<app::Quality__Enum>(get_class());
        }
    } // namespace Quality__Enum
} // namespace app::classes::types
