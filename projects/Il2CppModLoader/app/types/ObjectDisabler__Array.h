#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectDisabler__Array {
        namespace {
            app::ObjectDisabler__Array__Class* type_info_ref = nullptr;
        }
        app::ObjectDisabler__Array__Class** type_info = &type_info_ref;
        inline app::ObjectDisabler__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisabler__Array__Class>(type_info, "Moon.Utilities", "ObjectDisabler[]");
        }
        inline app::ObjectDisabler__Array* create() {
            return il2cpp::create_object<app::ObjectDisabler__Array>(get_class());
        }
    } // namespace ObjectDisabler__Array
} // namespace app::classes::types
