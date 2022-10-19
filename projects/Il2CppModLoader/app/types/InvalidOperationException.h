#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidOperationException {
        inline app::InvalidOperationException__Class** type_info = (app::InvalidOperationException__Class**)(modloader::win::memory::resolve_rva(0x04707278));
        inline app::InvalidOperationException__Class* get_class() {
            return il2cpp::get_class<app::InvalidOperationException__Class>(type_info, "System", "InvalidOperationException");
        }
        inline app::InvalidOperationException* create() {
            return il2cpp::create_object<app::InvalidOperationException>(get_class());
        }
    } // namespace InvalidOperationException
} // namespace app::classes::types
