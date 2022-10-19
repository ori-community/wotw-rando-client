#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataColumnChangeEventArgs {
        inline app::DataColumnChangeEventArgs__Class** type_info = (app::DataColumnChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047868B8));
        inline app::DataColumnChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataColumnChangeEventArgs__Class>(type_info, "System.Data", "DataColumnChangeEventArgs");
        }
        inline app::DataColumnChangeEventArgs* create() {
            return il2cpp::create_object<app::DataColumnChangeEventArgs>(get_class());
        }
    } // namespace DataColumnChangeEventArgs
} // namespace app::classes::types
