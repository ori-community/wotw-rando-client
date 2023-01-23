#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataTablePropertyDescriptor__Class.h>
#include <Modloader/app/structs/DataTablePropertyDescriptor.h>

namespace app::classes::types {
    namespace DataTablePropertyDescriptor {
        inline app::DataTablePropertyDescriptor__Class** type_info = (app::DataTablePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0471F720));
        inline app::DataTablePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataTablePropertyDescriptor__Class>(type_info, "System.Data", "DataTablePropertyDescriptor");
        }
        inline app::DataTablePropertyDescriptor* create() {
            return il2cpp::create_object<app::DataTablePropertyDescriptor>(get_class());
        }
    } // namespace DataTablePropertyDescriptor
} // namespace app::classes::types
