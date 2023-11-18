#pragma once
#include <Modloader/app/structs/ExecutionContextSwitcher.h>
#include <Modloader/app/structs/ExecutionContextSwitcher__Boxed.h>
#include <Modloader/app/structs/ExecutionContextSwitcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecutionContextSwitcher {
        inline app::ExecutionContextSwitcher__Class** type_info() {
            static app::ExecutionContextSwitcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExecutionContextSwitcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExecutionContextSwitcher__Class* get_class() {
            return il2cpp::get_class<app::ExecutionContextSwitcher__Class>(type_info(), "System.Threading", "ExecutionContextSwitcher");
        }
        inline app::ExecutionContextSwitcher* create() {
            return il2cpp::create_object<app::ExecutionContextSwitcher>(get_class());
        }
        inline app::ExecutionContextSwitcher__Boxed* box(app::ExecutionContextSwitcher value) {
            return il2cpp::box_value<app::ExecutionContextSwitcher__Boxed>(get_class(), value);
        }
    } // namespace ExecutionContextSwitcher
} // namespace app::classes::types
