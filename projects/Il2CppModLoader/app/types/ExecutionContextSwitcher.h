#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecutionContextSwitcher {
        namespace {
            app::ExecutionContextSwitcher__Class* type_info_ref = nullptr;
        }
        app::ExecutionContextSwitcher__Class** type_info = &type_info_ref;
        inline app::ExecutionContextSwitcher__Class* get_class() {
            return il2cpp::get_class<app::ExecutionContextSwitcher__Class>(type_info, "System.Threading", "ExecutionContextSwitcher");
        }
        inline app::ExecutionContextSwitcher* create() {
            return il2cpp::create_object<app::ExecutionContextSwitcher>(get_class());
        }
        inline app::ExecutionContextSwitcher__Boxed* box(app::ExecutionContextSwitcher value) {
            return il2cpp::box_value<app::ExecutionContextSwitcher__Boxed>(get_class(), value);
        }
    } // namespace ExecutionContextSwitcher
} // namespace app::classes::types
