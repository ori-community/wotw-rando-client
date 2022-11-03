#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTable__Array {
        inline app::DataTable__Array__Class** type_info = (app::DataTable__Array__Class**)(modloader::win::memory::resolve_rva(0x04754398));
        inline app::DataTable__Array__Class* get_class() {
            return il2cpp::get_class<app::DataTable__Array__Class>(type_info, "System.Data", "DataTable[]");
        }
        inline app::DataTable__Array* create() {
            return il2cpp::create_object<app::DataTable__Array>(get_class());
        }
    } // namespace DataTable__Array
} // namespace app::classes::types
