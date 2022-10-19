#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMeshFormat {
        inline app::IMeshFormat__Class** type_info = (app::IMeshFormat__Class**)(modloader::win::memory::resolve_rva(0x0470AD60));
        inline app::IMeshFormat__Class* get_class() {
            return il2cpp::get_class<app::IMeshFormat__Class>(type_info, "TriangleNet.IO", "IMeshFormat");
        }
    } // namespace IMeshFormat
} // namespace app::classes::types
