#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAlignable {
        inline app::IAlignable__Class** type_info = (app::IAlignable__Class**)(modloader::win::memory::resolve_rva(0x047288E8));
        inline app::IAlignable__Class* get_class() {
            return il2cpp::get_class<app::IAlignable__Class>(type_info, "", "IAlignable");
        }
    } // namespace IAlignable
} // namespace app::classes::types
