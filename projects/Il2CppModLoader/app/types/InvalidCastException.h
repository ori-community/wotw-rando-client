#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidCastException {
        inline app::InvalidCastException__Class** type_info = (app::InvalidCastException__Class**)(modloader::win::memory::resolve_rva(0x0478C848));
        inline app::InvalidCastException__Class* get_class() {
            return il2cpp::get_class<app::InvalidCastException__Class>(type_info, "System", "InvalidCastException");
        }
        inline app::InvalidCastException* create() {
            return il2cpp::create_object<app::InvalidCastException>(get_class());
        }
    } // namespace InvalidCastException
} // namespace app::classes::types
