#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComparer {
        inline app::IComparer__Class** type_info = (app::IComparer__Class**)(modloader::win::memory::resolve_rva(0x0471DBE0));
        inline app::IComparer__Class* get_class() {
            return il2cpp::get_class<app::IComparer__Class>(type_info, "System.Collections", "IComparer");
        }
    } // namespace IComparer
} // namespace app::classes::types
