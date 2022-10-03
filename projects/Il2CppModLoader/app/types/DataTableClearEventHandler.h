#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableClearEventHandler {
        namespace {
            app::DataTableClearEventHandler__Class* type_info_ref = nullptr;
        }
        app::DataTableClearEventHandler__Class** type_info = &type_info_ref;
        inline app::DataTableClearEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventHandler__Class>(type_info, "System.Data", "DataTableClearEventHandler");
        }
        inline app::DataTableClearEventHandler* create() {
            return il2cpp::create_object<app::DataTableClearEventHandler>(get_class());
        }
    } // namespace DataTableClearEventHandler
} // namespace app::classes::types
