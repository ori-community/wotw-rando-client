#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatException {
        inline app::FormatException__Class** type_info = (app::FormatException__Class**)(modloader::win::memory::resolve_rva(0x0470D9C0));
        inline app::FormatException__Class* get_class() {
            return il2cpp::get_class<app::FormatException__Class>(type_info, "System", "FormatException");
        }
        inline app::FormatException* create() {
            return il2cpp::create_object<app::FormatException>(get_class());
        }
    } // namespace FormatException
} // namespace app::classes::types
