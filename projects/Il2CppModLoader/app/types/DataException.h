#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataException {
        inline app::DataException__Class** type_info = (app::DataException__Class**)(modloader::win::memory::resolve_rva(0x0477E9D0));
        inline app::DataException__Class* get_class() {
            return il2cpp::get_class<app::DataException__Class>(type_info, "System.Data", "DataException");
        }
        inline app::DataException* create() {
            return il2cpp::create_object<app::DataException>(get_class());
        }
    } // namespace DataException
} // namespace app::classes::types
