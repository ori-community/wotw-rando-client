#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverflowException {
        inline app::OverflowException__Class** type_info = (app::OverflowException__Class**)(modloader::win::memory::resolve_rva(0x0477B5D8));
        inline app::OverflowException__Class* get_class() {
            return il2cpp::get_class<app::OverflowException__Class>(type_info, "System", "OverflowException");
        }
        inline app::OverflowException* create() {
            return il2cpp::create_object<app::OverflowException>(get_class());
        }
    } // namespace OverflowException
} // namespace app::classes::types
