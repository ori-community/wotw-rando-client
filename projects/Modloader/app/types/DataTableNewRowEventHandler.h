#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataTableNewRowEventHandler__Class.h>
#include <Modloader/app/structs/DataTableNewRowEventHandler.h>

namespace app::classes::types {
    namespace DataTableNewRowEventHandler {
        namespace {
            inline app::DataTableNewRowEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::DataTableNewRowEventHandler__Class** type_info = &type_info_ref;
        inline app::DataTableNewRowEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataTableNewRowEventHandler__Class>(type_info, "System.Data", "DataTableNewRowEventHandler");
        }
        inline app::DataTableNewRowEventHandler* create() {
            return il2cpp::create_object<app::DataTableNewRowEventHandler>(get_class());
        }
    } // namespace DataTableNewRowEventHandler
} // namespace app::classes::types
