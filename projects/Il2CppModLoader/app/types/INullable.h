#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INullable {
        inline app::INullable__Class** type_info = (app::INullable__Class**)(modloader::win::memory::resolve_rva(0x04750A80));
        inline app::INullable__Class* get_class() {
            return il2cpp::get_class<app::INullable__Class>(type_info, "System.Data.SqlTypes", "INullable");
        }
    } // namespace INullable
} // namespace app::classes::types
