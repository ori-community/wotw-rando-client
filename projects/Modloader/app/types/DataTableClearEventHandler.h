#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTableClearEventHandler {
        namespace {
            inline app::DataTableClearEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::DataTableClearEventHandler__Class** type_info = &type_info_ref;
        inline app::DataTableClearEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventHandler__Class>(type_info, "System.Data", "DataTableClearEventHandler");
        }
        inline app::DataTableClearEventHandler* create() {
            return il2cpp::create_object<app::DataTableClearEventHandler>(get_class());
        }
    } // namespace DataTableClearEventHandler
} // namespace app::classes::types
