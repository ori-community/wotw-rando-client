#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRow__Array {
        inline app::DataRow__Array__Class** type_info = (app::DataRow__Array__Class**)(modloader::win::memory::resolve_rva(0x04762E20));
        inline app::DataRow__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRow__Array__Class>(type_info, "System.Data", "DataRow[]");
        }
        inline app::DataRow__Array* create() {
            return il2cpp::create_object<app::DataRow__Array>(get_class());
        }
    } // namespace DataRow__Array
} // namespace app::classes::types
