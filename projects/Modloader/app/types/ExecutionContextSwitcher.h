#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExecutionContextSwitcher__Class.h>
#include <Modloader/app/structs/ExecutionContextSwitcher.h>
#include <Modloader/app/structs/ExecutionContextSwitcher__Boxed.h>

namespace app::classes::types {
    namespace ExecutionContextSwitcher {
        namespace {
            inline app::ExecutionContextSwitcher__Class* type_info_ref = nullptr;
        }
        inline app::ExecutionContextSwitcher__Class** type_info = &type_info_ref;
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
