#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputInfo__Array {
        namespace {
            app::InputInfo__Array__Class* type_info_ref = nullptr;
        }
        app::InputInfo__Array__Class** type_info = &type_info_ref;
        inline app::InputInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InputInfo__Array__Class>(type_info, "Moon.UI", "InputInfo[]");
        }
        inline app::InputInfo__Array* create() {
            return il2cpp::create_object<app::InputInfo__Array>(get_class());
        }
    } // namespace InputInfo__Array
} // namespace app::classes::types
