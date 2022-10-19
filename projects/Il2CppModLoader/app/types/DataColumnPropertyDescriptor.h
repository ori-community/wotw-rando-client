#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataColumnPropertyDescriptor {
        inline app::DataColumnPropertyDescriptor__Class** type_info = (app::DataColumnPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0472CCE0));
        inline app::DataColumnPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataColumnPropertyDescriptor__Class>(type_info, "System.Data", "DataColumnPropertyDescriptor");
        }
        inline app::DataColumnPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataColumnPropertyDescriptor>(get_class());
        }
    } // namespace DataColumnPropertyDescriptor
} // namespace app::classes::types
