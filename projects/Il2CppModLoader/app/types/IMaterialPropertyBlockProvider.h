#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMaterialPropertyBlockProvider {
        inline app::IMaterialPropertyBlockProvider__Class** type_info = (app::IMaterialPropertyBlockProvider__Class**)(modloader::win::memory::resolve_rva(0x04700E30));
        inline app::IMaterialPropertyBlockProvider__Class* get_class() {
            return il2cpp::get_class<app::IMaterialPropertyBlockProvider__Class>(type_info, "", "IMaterialPropertyBlockProvider");
        }
    } // namespace IMaterialPropertyBlockProvider
} // namespace app::classes::types
